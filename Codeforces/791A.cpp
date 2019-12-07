#include <iostream>

using namespace std ;

int main(){
    int a,b ;
    cin>>a>>b ;
    int count = 0;
    while(1){
        if(a>b){
            break ;
        }
        count++;
        a = a*3 ;
        b = b*2 ;
    }
    cout<<count<<endl;

    return 0;
}