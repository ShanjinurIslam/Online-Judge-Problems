#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int home[n];
    int away[n];

    int hc, ac;

    for (int i = 0; i < n; i++)
    {
        cin >> hc >> ac;
        home[i] = hc;
        away[i] = ac;
    }

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (home[i] == away[j])
                {
                    total += 1;
                }
            }
        }
    }

    cout << total << "\n";

    return 0;
}