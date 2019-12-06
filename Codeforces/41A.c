#include <stdio.h>
#include <string.h>
void rev(char a[])
{
    int  i ,n =strlen(a) ;
    char tem ;
    int j = n-1 ;

    for(i=0;i<n/2;i++)
    {
        tem = a[i] ;
        a[i] = a[j] ;
        a[j] = tem ;

        j-- ;
    }
}
int main()

{
    char a[1000] , b[1000] ;
    scanf("%s" , a) ;
    scanf("%s" , b ) ;
    rev(b) ;
    if(!strcmp(a,b))
        printf("YES") ;
    else
        printf("NO") ;
}
