#include <iostream>

using namespace std ;

int main(){
    int n;
    cin>>n ;
    int i = 0 ;
    int count = 0 ;
    while (i<n) {
        int x,y,z ;
        cin>>x>>y>>z ;
        if(x+y+z>1){
            count++ ;
        }
        i++ ;
    }
    cout<<count<<endl ;
    return 0 ;
}
