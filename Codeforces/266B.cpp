#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        vector<int> indexes;

        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                indexes.push_back(j);
            }
        }

        for (int j = 0; j < indexes.size(); j++)
        {
            s[indexes[j]] = 'G';
            s[indexes[j] + 1] = 'B';
        }
    }
    cout << s << endl;
    return 0;
}