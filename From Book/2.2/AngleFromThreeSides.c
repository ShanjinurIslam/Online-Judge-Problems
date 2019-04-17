#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c ;
    scanf("%lf%lf%lf",&a,&b,&c) ;
    double A = acos((c*c+b*b-a*a)/(2*b*c)) ;
    double B = acos((a*a+c*c-b*b)/(2*a*c)) ;
    double C = acos((a*a+b*b-c*c)/(2*a*b)) ;

    printf("%lf,%lf,%lf",A*(180/acos(-1.0)),B*(180/acos(-1.0)),C*(180/acos(-1.0))) ;
    return 0 ;
}

