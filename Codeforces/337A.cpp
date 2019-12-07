#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> values;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        values.push_back(x);
    }

    sort(values.begin(), values.end());

    int min = 2000;

    for (int i = 0; i < m - n + 1; i++)
    {
        int d = values[n + i - 1] - values[i];
        if (d < min)
        {
            min = d;
        }
    }

    cout << min << endl;

    return 0;
}