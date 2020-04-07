#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;

long long int arr[MAX] = {0};

long long int a, b, c, d, e, f;

long long int fn(int n)
{
    if (n == 0)
    {
        arr[0] = a;
        return a;
    }
    if (n == 1)
    {
        arr[1] = b;
        return b;
    }
    if (n == 2)
    {
        arr[2] = c;
        return c;
    }
    if (n == 3)
    {
        arr[3] = d;
        return d;
    }
    if (n == 4)
    {
        arr[4] = e;
        return e;
    }
    if (n == 5)
    {
        arr[5] = f;
        return f;
    }

    if (arr[n])
    {
        return arr[n];
    }

    arr[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6));
    arr[n] = arr[n] % 10000007;
    return arr[n];
}

int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while (cases--)
    {
        std::fill(arr, arr + MAX, 0);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}