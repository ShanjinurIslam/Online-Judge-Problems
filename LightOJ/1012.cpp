#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        pair<int, int> initial;
        int W, H;
        char c;
        cin >> W >> H;
        char field[H][W];
        bool visited[H][W];
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                visited[i][j] = false;
                cin >> c;
                field[i][j] = c;
                if (c == '@')
                {
                    initial = {i, j};
                }
            }
        }
        //bfs

        queue<pair<int, int>> q;
        q.push(initial);
        int count = 0;

        while (!q.empty())
        {
            pair<int, int> s = q.front();
            q.pop();

            if (visited[s.first][s.second])
                continue;
            else
            {
                visited[s.first][s.second] = true;
            }
            int x, y;
            x = s.first;
            y = s.second;
            count++;
            x = s.first - 1;
            if (x >= 0 && field[x][y] != '#')
            {
                q.push(make_pair(x, y));
            }

            x = s.first + 1;
            if (x < H && field[x][y] != '#')
            {
                q.push(make_pair(x, y));
            }

            x = s.first;
            y = s.second - 1;
            if (y >= 0 && field[x][y] != '#')
            {
                q.push(make_pair(x, y));
            }

            y = s.second + 1;
            if (y < W && field[x][y] != '#')
            {
                q.push(make_pair(x, y));
            }
        }

        printf("Case %d: %d\n",k,count) ;
    }
    return 0;
}