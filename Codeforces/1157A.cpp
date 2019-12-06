#include <bits/stdc++.h>

using namespace std ;

bool var[1000000002] ;

int return_index(int n){
    int v = n+1 ;
    while(v%10==0){
        v /= 10 ;
    }

    return v ;
}

int main(){
    int n ;
    cin>>n ;
    memset(var,false,1000000002) ;
    int sum = 0 ;
    int value = n ;
    while(true){
        if(var[value]==true) break ;
        else{
            var[value]=true ;
            sum++ ;
        }
        value = return_index(value) ;
    }
    cout<<sum<<endl ;
    return 0 ;
}
