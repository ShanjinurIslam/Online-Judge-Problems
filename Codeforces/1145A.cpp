#include <iostream>

using namespace std ;

bool isSorted(int *a,int index,int len){
    for(int i=index;i<len-1;i++){
        if(a[i]>a[i+1]) return false ;
    }

    return true ;
}

int main(){
    int n,*a ;

    cin>>n;

    a = new int[n] ;
    for(int i=0;i<n;i++){
        cin>>a[i] ;
    }

    int var = n ;
    bool b = true ;
    while(var>=1){
        b = false ;
        for(int i=0;i<n;i=i+var){
            b = isSorted(a,i,i+var) ;
            if(b==true) break ;
        }

        if(b==true) break ;

        else var /= 2 ;
    }

    cout<<var ;

    return 0 ;
}
