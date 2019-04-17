#include <stdio.h>
int bin(int x)
{
    int r = 0 ;
    int i=1 ;
    while(x!=0)
    {
        r += (x%2)*i ;
        x = x/2 ;
        i = i*10 ;
    }
 
    return r ;
}
 
int main()
 
{
    int i , n;
    scanf("%d" , &n) ;
    if(n<=100)
    {
        for(i=1;i<=n;i++)
        {
            int a,b,c,d,b1,b2,b3,b4 ;
            scanf("%d.%d.%d.%d" , &a, &b,&c,&d) ;
            scanf("%d.%d.%d.%d" , &b1,&b2,&b3,&b4) ;
 
            if(b1==bin(a) && b2==bin(b) && b3==bin(c) && b4==bin(d))
                printf("Case %d: Yes\n", i) ;
            else
                printf("Case %d: No\n" , i) ;
        }
    }
}
 