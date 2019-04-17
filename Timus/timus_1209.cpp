#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>

using namespace std ;

bool isPerfectSquare(long double x)
{
  long double sr = sqrt(x);
  return ((sr - floor(sr)) == 0);
}

int test(__int64 v){
    if(isPerfectSquare(1+8*(v-1))) return 1 ; //math --> recursion n(n-1)/2 + 1 as Value would be valid if 1+ 8*(z-1) is a perfect square
    else return 0 ;
}

int main(){
    __int64 n ;
    cin>>n ;
    string r ;
    for(int i=0;i<n;i++){
        __int64 s ;
        scanf("%I64d",&s) ;
        if(test(s)) r+="1 " ;
        else r+="0 " ;
    }

    cout<<r.substr(0,r.length()-1);

    return 0 ;
}
