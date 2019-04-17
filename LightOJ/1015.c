#include <stdio.h>
 
int main()
 
{
    int n;
    scanf("%d" , &n) ;
    if(n<=100)
    {
        int i ;
        for(i=1;i<=n;i++)
        {
            int m ;
            scanf("%d", &m ) ;
            if(m>=1 && m<=1000)
            {
                int j ;
                int a[m] ;
                int sum = 0 ;
                for(j=0;j<m;j++)
                {
                    scanf("%d",&a[j]) ;
                }
 
                for(j=0;j<m;j++)
                {
                    if(a[j]>=0)
                    {
                        sum = sum + a[j] ;
                    }
                }
 
                printf("Case %d: %d\n",i,sum) ;
            }
        }
    }
    return 0 ;
}