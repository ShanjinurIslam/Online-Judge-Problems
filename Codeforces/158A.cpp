#include <iostream>

using namespace std ;

int main(){
    int n , k ;
    cin>>n>>k ;
    int i = 0 ;
    int total=0 ;
    int value ;
    int a[n] ;
    while(i<n){
        cin>>value ;
        a[i++] = value ;
    }
    i = 0 ;
    int tem = a[k-1] ;
    while(i<n){
        if(a[i]>=tem && a[i]!=0){
            total++ ;
        }
        i++ ;
    }
    cout<<total ;
    return 0 ;
}
