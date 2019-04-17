#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std ;

int main(){
    int n;
    scanf("%d",&n) ;
    for(int i=1;i<=n;i++){
        long long int s ;
        scanf("%lld",&s) ;
        long long int r = (long long int)(floor(sqrt(s-1))) + 1 ;
        long long int upper = (1+ (r*r)) ;
        long long int lower = (1+((r-1)*(r-1))) ;
        long long int mid = (upper+lower)/2 ;

        if(r%2==0){
            if(s<mid){
                printf("Case %d: %lld %lld\n",i,s-lower+1,r) ;
            }
            else if(s>mid){
                printf("Case %d: %lld %lld\n",i,r,upper-s) ;
            }
            else{
                printf("Case %d: %lld %lld\n",i,r,r) ;
            }
        }
        else{
            if(s<mid){
                printf("Case %d: %lld %lld\n",i,r,s-lower+1) ;
            }
            else if(s>mid){
                printf("Case %d: %lld %lld\n",i,upper-s,r) ;
            }
            else{
                printf("Case %d: %lld %lld\n",i,r,r) ;
            }
        }

    }
    return 0 ;
}
