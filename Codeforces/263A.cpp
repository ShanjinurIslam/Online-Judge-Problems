#include <iostream>
#include <cmath>

using namespace std ;

int main(){
    int n ;
    int x,y ;
    int flag = 0 ;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>n ;
            if(n!=0){
                x = i ;
                y = j ;
                flag = 1 ;
                break ;
            }
        }
        if(flag) break;
    }

    cout<<abs(x-3)+abs(y-3)<<endl ;
    return 0 ;
}