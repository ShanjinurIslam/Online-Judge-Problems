#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    string prev = "";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (i != 0)
        {
            if (s[0] == prev[1])
            {
                count++;
            }
        }
        prev = s;
    }
    cout << count << endl;
    return 0;
}