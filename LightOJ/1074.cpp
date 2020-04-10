// bellman ford algorithm can not process graphs with negative cycles

#include <bits/stdc++.h>
#include <cmath>
#define INF 1000000007
using namespace std;

class Graph
{
private:
    vector<tuple<int, int, int>> edges;
    int N;
    int *distances;

public:
    Graph(int N)
    {
        this->N = N;
        distances = new int[N];
    }

    void add_edge(int a, int b, int w)
    {
        edges.push_back(make_tuple(--a, --b, w));
    }

    void print_graph()
    {
        for (auto e : edges)
        {
            int a, b, w;
            tie(a, b, w) = e;
            cout << a << " " << b << " " << w << endl;
        }
    }

    void bellman_ford(int starting_node)
    {
        for (int i = 0; i < N; i++)
        {
            distances[i] = INF;
        }
        distances[starting_node] = 0;

        for (int i = 0; i < N - 1; i++)
        {
            for (auto e : edges)
            {
                int a, b, w;
                tie(a, b, w) = e;
                distances[b] = min(distances[b], distances[a] + w);
            }
        }
    }

    int get_distance(int j)
    {
        return distances[--j];
    }

    ~Graph()
    {
        delete[] distances;
    }
};

int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        printf("Case %d:\n", k);
        getchar();
        int n;
        cin >> n;
        Graph g(n);
        int busy[n + 1];
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            busy[i] = val;
        }
        int e;
        cin >> e;
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            int dist = pow((busy[b - 1] - busy[a - 1]), 3);
            g.add_edge(a, b, dist);
        }
        g.bellman_ford(0);

        int q;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int j;
            cin >> j;
            int dist = g.get_distance(j);
            if (dist < 3 || dist == INF || dist > 999999000)
            {
                cout << "?\n";
            }
            else
            {
                cout << dist << "\n";
            }
        }
    }
    return 0;
}