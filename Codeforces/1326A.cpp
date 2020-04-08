#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout<<23 ;
            int remaining = n - 2;
            for (int i = 0; i < remaining; i++)
            {
                cout<<3 ;
            }
            cout<<endl ;
            
        }
    }
    return 0;
}