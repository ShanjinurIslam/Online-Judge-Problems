#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> group;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        group.push_back(x);
    }

    int sum = 0;

    sort(group.begin(), group.end(), greater<int>());

    int prev = 0;

    for (int i = 0; i < group.size(); i++)
    {
        if (group[i] == 4)
        {
            sum++;
            prev = 0;
        }
        else if (group[i] == 3)
        {
            int index = -1;
            for (int j = group.size() - 1; j > i; j--)
            {
                if (group[j] == 1)
                {
                    index = j;
                    break;
                }
                if (group[j] > 1)
                    break;
            }
            if (index != -1)
            {
                group.erase(group.begin() + index);
                sum++;
                prev = 0;
            }
            else
            {
                sum++;
                prev = 1;
            }
        }
        else if (group[i] == 2)
        {
            if (prev == 2)
            {
                prev = prev - 2;
            }
            else
            {
                sum++;
                prev = 2;
            }
        }
        else if (group[i] == 1)
        {
            if (prev >= 1)
            {
                prev--;
            }
            else
            {
                sum++;
                prev = 3;
            }
        }
    }

    cout << sum << endl;

    return 0;
}