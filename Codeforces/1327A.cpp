#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long unsigned int n, k;
        cin >> n >> k;

        long long unsigned int square = k * k;

        if (square <= n)
        {
            if (n % 2 != k % 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}