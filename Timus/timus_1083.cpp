#include <iostream>
#include <string>
using namespace std ;

int main(){
    int n;
    string s ;
    cin>>n>>s ;
    int k = s.length() ;
    int mod = n%k ;

    int v = 0 ;
    int mul = 1 ;
    while((n-(k*v))>mod){
        mul *= (n-(k*v)) ;
        v++ ;
    }

    cout<<mul ;
    return 0 ;
}
