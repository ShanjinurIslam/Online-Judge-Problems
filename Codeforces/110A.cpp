#include <iostream>

using namespace std;

int main()
{
    int list[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            sum++;
        }
    }

    int n = sum;

    bool flag = false;
    for (int i = 0; i < 14; i++)
    {
        if (list[i] > n)
        {
            break;
        }
        if (n == list[i])
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}