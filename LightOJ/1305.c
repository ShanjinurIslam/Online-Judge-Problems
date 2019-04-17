#include <stdio.h>
#include <math.h>
int main()
 
{
    int n;
    scanf("%d", &n) ;
    int i ;
    for(i=1;i<=n;i++)
    {
        int a1,a2,b1,b2,c1,c2 ;
        scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2) ;
 
        int d1 = (a1+c1-b1) ;
        int d2 = (a2+c2-b2) ;
        int m = a2-b2 ;
        int n = a1-b1 ;
        int o = a1*b2 - a2*b1 ;
        float h = (m*d1 - n*d2 + o)/sqrt(pow(m,2)+pow(n,2)) ;
 
        float d = sqrt((a1-b1)*(a1-b1) + (a2-b2)*(a2-b2)) ;
 
        float area =  fabs(d*h) ;
 
        printf("Case %d: %d %d %0.0f\n",i,d1,d2,area);
    }
    return 0 ;
}