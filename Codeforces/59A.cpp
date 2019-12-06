#include <stdio.h>
#include <string.h>
int main()

{
    char a[100] ;
    scanf("%s" , a) ;
    int n= strlen(a) ;
    int i ;
    int count = 0 ;
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90)
            count++ ;
    }

    if(count>n/2)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=97 && a[i]<=122)
                a[i] = a[i] -32 ;
        }
    }

    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=65 && a[i]<=90)
                a[i] = a[i] +32 ;
        }
    }

    printf("%s" , a) ;


    return 0 ;
}
