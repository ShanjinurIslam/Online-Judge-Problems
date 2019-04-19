#include <iostream>

using namespace std ;


int main(){
    int n ;
    cin>>n ;
    for(int i=1;i<=n;i++){
        int x1,y1,x2,y2 ;
        cin>>x1>>y1>>x2>>y2 ;
        int t ;
        cin>>t ;
        cout<<"Case "<<i<<":"<<endl ;
        for(int j=1;j<=t;j++){
            int x,y ;
            cin>>x>>y ;
            if(x>=x1 && x<=x2 && y>=y1 && y<=y2){
                cout<<"Yes"<<endl ;
            }
            else cout<<"No"<<endl ;
        }
    }
    return 0 ;
}
