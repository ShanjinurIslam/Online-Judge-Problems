#include <iostream>
#include <cmath>

using namespace std ;

int main(){
    int l,r,a ;
    cin>>l>>r>>a ;
    
    if(l<r){
        if(l+a<=r){
            l += a ;
            r = l ;
        }
        else{
            int div = r-l ;
            l = r ;
            a -= div ;
            if(a%2==0){
                r += (a/2) ;
                l += (a/2) ;
            }
            else if(a%2==1){
                a -= 1 ;
                r += (a/2);
                l += (a/2);
            }
        }
    }
    else if(l>r){
        if(r+a<=l){
            r += a ;
            l = r ;
        }
        else{
            int div = l-r ;
            r = l ;
            a -= div ;
            if(a%2==0){
                r += (a/2) ;
                l += (a/2) ;
            }
            else if(a%2==1){
                a -= 1 ;
                r += (a/2);
                l += (a/2);
            }
        }
    }
    
    else if(l==r){
        l += (int)(floor(a/2)) ;
        r += (int)(floor(a/2)) ;
    }
    
    cout<<l+r<<endl ;
    
    
    return 0 ;
}