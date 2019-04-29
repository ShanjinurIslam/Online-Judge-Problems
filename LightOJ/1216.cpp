#include <iostream>
#include <cmath>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    for(int i=1;i<=n;i++){
        double r1,r2,h,p ;
        cin>>r1>>r2>>h>>p ;

        double r0 = (p/h)*r1 ;

        double v = (1.0/3.0)*(acos(-1.0))*(p)*((r0*r0) + (r0*r2) + (r2*r0)) ;

        cout<<"Case "<<i<<": "<<v<<endl ;
    }
    return 0 ;
}
