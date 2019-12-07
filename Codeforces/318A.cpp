#include <iostream>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            long long int out = 1 + (k - 1) * 2;
            cout << out << endl;
        }
        else
        {
            long long int out = 2 + ((k - n / 2) - 1) * 2;
            cout << out << endl;
        }
    }
    else
    {
        if (k <= (n + 1) / 2)
        {
            long long int out = 1 + (k - 1) * 2;
            cout << out << endl;
        }
        else
        {
            long long int val = k - (n + 1) / 2;
            long long int out = 2 + (val - 1) * 2;
            cout << out << endl;
        }
    }

    return 0;
}