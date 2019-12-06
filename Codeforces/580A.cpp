#include <iostream>

using namespace std ;

int main(){
    int n;
    int count = 1 ;
    int prev = -1 ;
    int max = -1 ;
    cin>>n ;
    for(int i=0;i<n;i++){
        int x ;
        cin >> x;
        if(i!=0){
            if(x>=prev){
                count++ ;
            }
            else{
                count = 1 ;
            }
            
        }
        prev = x;
        if (max < count)
        {
            max = count;
        }
    }
    cout<<max<<endl ;
    return 0 ;
}