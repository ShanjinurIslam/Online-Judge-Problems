#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            a.push_back(val);
        }
        vector<set<int>> prev;
        set<int> init;
        prev.push_back(init);

        for (int i = 1; i < a.size(); i++)
        {
            set<int> new_set;
            new_set.insert(a[i - 1]);
            new_set.insert(prev[i - 1].begin(),prev[i-1].end());
            prev.push_back(new_set);
        }
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            b.push_back(val);
        }

        if (a[0] != b[0])
        {
            cout << "NO" << endl;
            continue;
        }

        bool flag = true;

        for (int i = 1; i < n; i++)
        {
            if (a[i] != b[i])
            {
                int diff = b[i] - a[i];
                if (diff > 0)
                {
                    if (prev[i].find(1) != prev[i].end())
                    {
                        continue;
                    }
                    else
                    {
                        flag = false;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else if (diff < 0)
                {
                    if (prev[i].find(-1) != prev[i].end())
                    {
                        continue;
                    }
                    else
                    {
                        flag = false;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}