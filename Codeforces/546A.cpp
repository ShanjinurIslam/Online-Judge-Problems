#include <iostream>
#include <cstdio>

using namespace std ;

int main(){
    long k,n,w ;
    scanf("%ld%ld%ld",&k,&n,&w);
    long sum = k*(w*(w+1))/2;
    if(n>sum){
        cout<<0<<endl ;
    }
    else
    {
        cout<<sum-n<<endl;
    }
    
    return 0 ;
}