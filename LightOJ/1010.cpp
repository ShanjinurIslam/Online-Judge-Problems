#include <iostream>

using namespace std;

int func(int m, int n)
{
    int ans = 0;

    if (m == 1 | n == 1)
    {
        ans = max(m, n);
    }

    else if (m == 2)
    {
        if (n % 4 == 1)
        {
            ans = ((n / 4) * 4) + 2;
        }
        else if(n%4 > 1){
            ans = ((n / 4) * 4) + 4;
        }
        else{
            ans = ((n / 4) * 4) ;
        }
    }
    else if (n == 2)
    {
        if (m % 4 == 1)
        {
            ans = ((m / 4) * 4) + 2;
        }
        else if(m%4 > 1){
            ans = ((m / 4) * 4) + 4;
        }
        else{
            ans = ((m / 4) * 4) ;
        }
    }

    else
    {
        ans = ((m * n) + 1) / 2;
    }

    return ans;
}

int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while (cases--)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        printf("Case %d: %d\n", ++caseno, func(m, n));
    }
    return 0;
}