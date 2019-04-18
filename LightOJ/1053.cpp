#include <iostream>
#include <cmath>

using namespace std ;

int isRightAngle(int a,int b,int c){
    float A = (180/acos(-1.0))*acos((1.0*(c*c+b*b-a*a))/(2*c*b*1.0)) ;
    float B = (180/acos(-1.0))*acos((1.0*(a*a+c*c-b*b))/(2*a*c*1.0)) ;
    float C = (180/acos(-1.0))*acos((1.0*(a*a+b*b-c*c))/(2*a*b*1.0)) ;
    if(A==90.0 || B==90.0 || C==90.0 ) return 1 ;
    else return 0 ;
}

int main(){
    int n;
    cin>>n ;
    for(int i=1;i<=n;i++){
        int a,b,c ;
        cin>>a>>b>>c ;
        if(isRightAngle(a,b,c)) cout<<"Case "<<i<<": yes"<<endl ;
        else cout<<"Case "<<i<<": no"<<endl ;
    }
    return 0 ;
}
