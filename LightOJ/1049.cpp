#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

bool sortbysecdec(const pair<int, int> &a,
                  const pair<int, int> &b)
{
    return (a.second > b.second);
}

class Graph
{
private:
    vector<pair<int, int>> *adj;
    vector<pair<int, int>> *rev;
    priority_queue<tuple<int, int, int>> edges;
    int N;
    bool directed;
    bool *visited;
    int cost;

public:
    Graph(int N, bool directed = false)
    {
        this->N = N;
        adj = new vector<pair<int, int>>[N];
        rev = new vector<pair<int, int>>[N];
        visited = new bool[N];
        this->directed = directed;
    }

    void addEdge(int a, int b, int w)
    {
        if (directed)
        {
            adj[a].push_back({b, w});
            rev[b].push_back({a, w});
            edges.push(make_tuple(w, a, b));
        }
        else
        {
            adj[a].push_back({b, w});
            adj[b].push_back({a, w});
        }
    }

    void rev_sort()
    {
        for (int i = 0; i < N; i++)
        {
            sort(adj[i].begin(), adj[i].end(), sortbysecdec);
            sort(rev[i].begin(), rev[i].end(), sortbysec);
        }
    }

    void dfs_visit(int i)
    {
        if (visited[i])
        {
            return;
        }
        visited[i] = true;
        int adj_len = adj[i].size();
        if (adj_len == 0)
        {
            for (int j = 0; j < rev[i].size(); j++)
            {
                if (!visited[rev[i][j].first])
                {
                    cost += rev[i][j].second;
                    dfs_visit(rev[i][j].first);
                }
            }
        }
        else
        {
            for (auto u : adj[i])
            {
                dfs_visit(u.first);
            }
        }
    }

    void dfs()
    {
        cost = 0;
        for (int i = 0; i < N; i++)
        {
            visited[i] = false;
        }

        int w, a, b;
        tie(w, a, b) = edges.top();
        dfs_visit(a);

        cout << cost << endl;
    }

    void printGraph()
    {
        for (int i = 0; i < this->N; i++)
        {
            for (int j = 0; j < adj[i].size(); j++)
            {
                cout << adj[i][j].first << " " << adj[i][j].second << " ";
            }
            cout << endl;
        }
    }

    ~Graph()
    {
        delete[] adj;
        delete[] rev;
        delete[] visited;
    }
};

int main()
{
    int N;
    cin >> N;
    int a, b, w;
    Graph g(N, true);
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b >> w;
        g.addEdge(--a, --b, w);
    }
    g.rev_sort();
    g.printGraph();
    g.dfs();
    return 0;
}