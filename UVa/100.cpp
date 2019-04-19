#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std ;

bool isInteger(double value){
    return (value==floor(value)) ;
}


unsigned long int cycleLength(int n){
    unsigned long int count = 0 ;
    while(!isInteger(log2(n))){
        count++ ;
        if(n%2==0) n /= 2 ;
        else n = 3*n + 1 ;
    }

    return count + (unsigned long int)(log2(n) + 1) ;
}

int main()
{
    int m,n ;
    while (scanf("%d %d\n",&m,&n)==2){

        unsigned int max = 0 ;
        if(m<=n){
            for(int i=m;i<=n;i++){
            unsigned int count = cycleLength(i) ;
            if(count>max){
                    max = count ;
                }
            }
        }
        else{
            for(int i=n;i<=m;i++){
                unsigned int count = cycleLength(i) ;
                if(count>max){
                    max = count ;
                }
            }
        }
        printf("%d %d %ld\n",m,n,max) ;
    }
    return(0);
}
