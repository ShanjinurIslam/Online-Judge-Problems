#include <stdio.h>
 
int main()
 
{
    int n ;
    scanf("%d" , &n) ;
    int i ;
    for(i=1;i<=n;i++)
    {
        int a ;
        scanf("%d" , &a) ;
        int tem = a;
        int rev = 0 ;
        while(a>0)
        {
            rev = 10*rev + (a%10) ;
 
            a= a/10 ;
        }
 
        if(rev==tem)
        {
            printf("Case %d: Yes\n",i) ;
        }
 
        else
        {
            printf("Case %d: No\n",i) ;
        }
    }
    return 0 ;
}