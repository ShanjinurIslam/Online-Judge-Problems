#include <stdio.h>
int main()
{
    int a ;

    scanf("%d" , &a) ;

    if(a>=1 && a<=100)
    {
        if(a%2==0 && a>2)
        {
            printf("Yes") ;

        }

        else
        {
            printf("No") ;
        }
    }

    return 0 ;
}
