#include <bits/stdc++.h>

using namespace std;

class Graph
{
private:
    vector<int> *adj;
    int N;
    bool directed;
    bool *visited;
    int *distance;
    int *color;

public:
    Graph(int N, bool directed = false)
    {
        this->N = N;
        adj = new vector<int>[N];
        visited = new bool[N];
        distance = new int[N];
        color = new int[N];
        this->directed = directed;
    }

    void addEdge(int a, int b)
    {
        if (directed)
        {
            adj[a].push_back(b);
        }
        else
        {
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    }

    void printGraph()
    {
        cout << endl;
        for (int i = 0; i < this->N; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < adj[i].size(); j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << "\n";
        }
    }

    int bfs(int starting_node)
    {
        //iterative approach
        //will have a distance array to calculate distance of each node from starting node
        //queue is required
        queue<int> q;
        int white = 0 ;
        int black = 0 ;

        color[starting_node] = 0 ;
        white += 1 ;
        visited[starting_node] = true;
        distance[starting_node] = 0;
        q.push(starting_node);

        while (!q.empty())
        {
            int top = q.front();
            q.pop();
            for (auto u : adj[top])
            {
                if (visited[u])
                    continue;
                visited[u] = true;
                distance[u] = distance[top] + 1; //
                if(color[top]==0){
                    color[u] = 1 ;
                    black++ ;
                }
                else{
                    color[u] = 0 ;
                    white ++ ;
                }
                q.push(u);
            }
        }

        return max(white,black) ;
    }

    void print_color()
    {
        for (int i = 0; i < N; i++)
        {
            cout << i << " " << color[i] << endl;
        }
    }

    int get_max_color(){
        
        for (int i = 0; i < N; i++)
        {
            visited[i] = false;
        }

        int sum = 0 ;
        for(int i=0;i<N;i++){
            if(!adj[i].empty() && !visited[i]){
                sum += bfs(i) ;
            }
        }

        return sum ;
    }

    ~Graph()
    {
        delete[] adj;
        delete[] visited;
        delete[] distance;
        delete[] color;
    }
};

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int max = -1;
        vector<pair<int, int>> edges;
        for (int k = 0; k < n; k++)
        {
            int a, b;
            cin >> a >> b;
            edges.push_back({a, b});
            if (a > max)
            {
                max = a;
            }
            if (b > max)
            {
                max = b;
            }
        }

        Graph g(max);

        for (int i = 0; i < n; i++)
        {
            g.addEdge(--edges[i].first, --edges[i].second);
        }
        g.bfs(0);
        cout<<"Case "<<i<<": "<<g.get_max_color()<<"\n" ;
    }
    return 0;
}