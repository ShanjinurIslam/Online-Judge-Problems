#include <iostream>

using namespace std ;
int main(){
    char a[1000] ;
    cin>>a ;
    char tem = a[0] ;
    if(a[0]!='\0'){
        if(tem>=65 && tem<=90){
        cout<<a ;
        }
    else{
        a[0]=a[0]-32 ;
        cout<<a ;
        }
    }
    return 0 ;
}
