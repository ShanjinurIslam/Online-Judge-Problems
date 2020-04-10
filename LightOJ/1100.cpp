#include <bits/stdc++.h>

using namespace std;

vector<int> get_subarray(vector<int> arr, int begin, int end)
{
    vector<int> new_vector;
    for (int i = begin; i <= end; i++)
    {
        new_vector.push_back(arr[i]);
    }
    return new_vector;
}

int main()
{
    int t;
    int n, q;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        cin >> n >> q;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }

        for (int i = 0; i < q; i++)
        {
            int b, e;
            cin >> b >> e;
            vector<int> sub_arr = get_subarray(arr, b, e);
            sort(sub_arr.begin(), sub_arr.end());

            int m = 10000;
            for (int k = 1; k < sub_arr.size(); k++)
            {
                m = min(m, sub_arr[k] - sub_arr[k - 1]);
            }
            cout << m << endl;
        }
    }
    return 0;
}

// Verdict: TLE