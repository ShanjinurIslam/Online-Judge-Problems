#include <iostream>
#include <cstring>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int i = 0 ;
    int total = 0 ;
    char a[10] ;
    while(i<n){
        cin>>a ;
        if(!strcmp(a,"X++")){
            total++ ;
        }
        else if(!strcmp(a,"++X")){
            total++ ;
        }
        else if(!strcmp(a,"--X")){
            total-- ;
        }
        else{
            total-- ;
        }
        i++ ;
    }
    cout<<total ;
    return 0 ;
}
