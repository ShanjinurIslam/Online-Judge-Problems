#include <stdio.h>
 
int main()
 
{
    int n ;
 
    scanf("%d" , &n) ;
 
    int i ;
    for(i=1;i<=n;i++)
    {
        int a , b ;
 
        scanf("%d%d" , &a , &b) ;
 
        printf("Case %d: %d\n" , i, a+b) ;
    }
 
    return 0 ;
}
 