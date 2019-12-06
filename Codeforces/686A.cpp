#include <stdio.h>
#include <string.h>
int main()

{
    char s1[2] = "+" ;
    char s2[2] = "-" ;
    int n ;
    double x ;
    scanf("%d%lf" , &n , &x) ;
    int  i ;
    double sum = x ;
    int d= 0 ;
    for(i=1;i<=n;i++)
    {
        char a[2] ;
        double b ;
        scanf("%s%lf",&a ,&b) ;
        if(!strcmp(a,s1))
        {
            sum = sum + b ;
        }

        if(!strcmp(a,s2))
        {
            if(sum>=b)
            {
                sum = sum - b ;
            }

            else
            {
                d++ ;
            }
        }
    }

    printf("%0.0lf %d" , sum ,d) ;
    return 0 ;
}
