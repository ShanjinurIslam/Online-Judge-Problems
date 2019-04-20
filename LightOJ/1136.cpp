#include <iostream>
#include <cstdio>

using namespace std ;

long int divby3(long int a){
    long int ans = (a/3)*2 ;
    if(a%3==2) ans++ ;

    return ans ;
}

int main(){
    //freopen("out.txt","w",stdout) ;
    int n ;
    cin>>n ;
    for(int i=1;i<=n;i++){
        long int a,b ;
        scanf("%ld%ld",&a,&b) ;
        printf("Case %d: %ld\n",i,divby3(b)-divby3(a-1)) ;
    }
    return 0 ;
}
