#include <iostream>

using namespace std ;

int main(){
    unsigned int a,b ;
    cin>>a>>b ;
    int count = 0 ;
    if(b>(a*a)){
        //do nothing
    }
    else{
        for(int i=1;i<=a;i++){
            if(((b/i)<=a) && (b%i==0)){
                count++ ;
            }
        }
    }

    cout<<count<<endl ;

    return 0 ;
}
