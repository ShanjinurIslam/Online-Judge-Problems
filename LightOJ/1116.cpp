#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std ;

bool isInteger(double value){
    return (value==floor(value)) ;
}

int main(){
    freopen("out.txt","w",stdout) ;
    int n ;
    cin>>n ;
    for(int i=1;i<=n;i++){
        long long int val ;
        scanf("%lld",&val) ;
        if(val%2){
            printf("Case %d: Impossible\n",i) ;
        }
        else{
            long long int pow = 1 ;
            while(1){
                val /= 2 ;
                pow *= 2 ;
                if(val%2!=0) break ;
            }
            printf("Case %d: %lld %lld\n",i,val,pow) ;
        }
    }
    return 0;
}
