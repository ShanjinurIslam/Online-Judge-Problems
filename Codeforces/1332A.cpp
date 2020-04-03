#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        int x, y, x1, y1, x2, y2;
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        x = x - a + b;
        y = y - c + d;

        if ((x >= x1 && x <= x2) && (y >= y1 && y <= y2) && (x2 > x1 || a + b == 0) && (y2 > y1 || c + d == 0))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}