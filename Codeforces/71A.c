#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void itos(int x,char c[])
{
    int i=0 ;
    while(x!=0)
    {
        c[i] = x%10 + '0' ;
        x = x/10 ;
        i++ ;
    }
    c[i] = '\0' ;
    int j = strlen(c)-1 ;
    char tem ;
    for(i=0;i<strlen(c)/2;i++)
    {
        tem = c[i] ;
        c[i] = c[j] ;
        c[j] = tem ;

        j-- ;
    }

}
int main()

{
    int n ;
    scanf("%d" , &n) ;
    int i ;
    for(i=1;i<=n;i++)
    {
        char a[1000] ;
        scanf("%s" , a) ;
    if(strlen(a)>10)
    {
    int x = strlen(a) - 2 ;
    char b[1000];
    char c[1000] ;
    char d[10] ;
    d[0] = a[x+1] ;
    d[1] = '\0' ;
    itos(x,c) ;
    strcat(c,d) ;
    b[0]=a[0] ;
    b[1]='\0' ;
    strcat(b,c) ;
    printf("%s\n" , b) ;
    }

    else
    {
        printf("%s\n" , a) ;
    }
    }
    return 0;
}
