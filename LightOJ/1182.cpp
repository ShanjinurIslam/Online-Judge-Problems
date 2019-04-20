#include <iostream>
#include <cstdio>

using namespace std ;

int parity(long int a){
    int count = 0 ;
    while(a!=0){
        if(a&0x1) count++ ;
        a = a>>1 ;
    }

    return count ;
}

int main(){
    int n ;
    cin>>n ;
    freopen("out.txt","w",stdout) ;
    for(int i=1;i<=n;i++){
        long int a ;
        scanf("%ld",&a) ;
        if(parity(a)%2) printf("Case %d: odd\n",i) ;
        else printf("Case %d: even\n",i) ;
    }
    return 0 ;
}
