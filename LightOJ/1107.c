#include <iostream>

using namespace std ;

int straightline(int x,int y,int x1,int y1,int x2,int y2){
    return (int)(((y1-y2)*1.0)/(1.0*(x1-x2))*(x-x1)) - (y-y1)
}

int main(){
    int n ;
    cin>>n ;

    for(int i=1;i<=n;i++){
        int x1,y1,x2,y2 ;
        cin>>x1>>y1>>x2>>y2 ;
        int t ;
        for(int j=1;j<=t;j++){
            int x,y ;
            cin>>x>>y ;
            int a = straightline(x,y,x1,y1,x2,y1) ;
            int b = straightline(x,y,x1,y1,x1,y2) ;
            int c = straightline(x,y,x1,y2,x2,y2) ;
            int d = straightline(x,y,x2,y1,x2,y2) ;

            cout<<a<<b<<c<<d<<endl ;
        }
    }
    return 0 ;
}
