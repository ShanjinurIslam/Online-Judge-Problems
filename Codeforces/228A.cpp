#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a[4];
    vector<ll> v;
    int distinct = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];

        bool flag = false;

        for (int j = 0; j < i; j++)
        {
            if (a[i] == v[j])
            {
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            distinct += 1;
        }

        v.push_back(a[i]);
    }

    cout << 4 - distinct << "\n";

    return 0;
}