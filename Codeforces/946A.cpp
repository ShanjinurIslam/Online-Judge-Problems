#include <iostream>

using namespace std ;

int main(){
    int n,x ;
    cin>>n;
    int sum = 0 ;
    for(int i=0;i<n;i++){
        cin>>x ;
        sum += (x>=0?x:(-1*x)) ;
    }
    cout<<sum<<endl ;
    return 0 ;
}