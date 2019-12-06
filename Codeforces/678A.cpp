#include <stdio.h>

int main()

{
    int a,b ;
    scanf("%d %d" , &a, &b) ;
    int i=b ,j =1 ,r ;
    if(a<b || a>b)
    {
        while((i*j)<a)
            {
                j++ ;
            }
        r = i*j ;
    }

    if(a%b==0)
    {
        r = b+ (a/b)*b ;
    }
    printf("%d" , r) ;
    return 0 ;
}
