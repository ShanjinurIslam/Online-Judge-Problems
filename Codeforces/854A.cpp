#include <iostream>
using namespace std ;

int main(){
    int n,k ;
    int min,max ;
    cin>>n>>k ;
    if(n>k &&k>0){
        min = 1;
        int r = n-k ;
        if(r<=k){
            max = r ;
        }
        else{
            if(2*k<=r){
                max = 2*k ;
            }
            else if(2*k>r){
                max = r ;
            }
        }
    } else min = max=0 ;
    cout<<min<<" "<<max ;
    return 0 ;
}
