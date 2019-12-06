#include <iostream>
#include <cstring>

using namespace std ;

int main(){
    char a[100] ;
    cin>>a ;
    bool sc = false ;
    int s = 0 ;
    int b = 0 ;
    int size = (int) strlen(a) ;
    if(a[0]>=97 && a[0]<=(97+25)){
        sc = true ;
    }
    for(int i=0;i<size;i++){
        if(a[i]>=97 && a[i]<=(97+25)){
            s++ ;
        }
        else{
            b++ ;
        }
    }
    if(s==1 && sc==true){
        for(int i=0;i<size;i++){
            if(i==0){
                if(sc==true){
                    a[i] = a[i]-'a'+ 65 ;
                    cout<<a[i] ;
                }
                else{
                    cout<<a[i] ;
                }
            }
            else{
                a[i] = (a[i]-'A') + 97 ;
                cout<<a[i] ;
            }
        }
    }
    else if(b==size){
        for(int i=0;i<size;i++){
            a[i] = (a[i]-'A') + 97 ;
            cout<<a[i] ;
        }
    }
    else{
        cout<<a<<endl ;
    }
    
    return 0 ;
}