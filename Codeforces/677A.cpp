#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= h)
        {
            count++;
        }
        else
        {
            count += 2;
        }
    }

    cout << count << endl;

    return 0;
}