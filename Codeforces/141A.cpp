#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int gh[26] = {0};
    int pile[26] = {0};

    string g, h, p;
    cin >> g;
    cin >> h;
    cin >> p;

    int lg = g.length();
    int lh = h.length();
    int lp = p.length();

    for (int i = 0; i < lg; i++)
    {
        gh[g[i] - 65]++;
    }

    for (int i = 0; i < lh; i++)
    {
        gh[h[i] - 65]++;
    }

    for (int i = 0; i < lp; i++)
    {
        pile[p[i] - 65]++;
    }

    int flag = 0;

    for (int i = 0; i < 26; i++)
    {
        if (gh[i] != pile[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}