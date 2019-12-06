#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;

int main(){
    vector<long long int> vi ;
    long long int n,v ;
    long long int sum = 0 ;
    cin>>n>>v ;
    for(int i=0;i<n;i++){
        long long int ni ;
        cin>>ni ;
        for(int j=0;j<ni;j++){
            long long int item ;
            cin>>item ;
            if(item<v){
                if(find(vi.begin(),vi.end(),i+1)==vi.end()){
                    sum +=1 ;
                    vi.push_back(i+1) ;
                }
            }
        }
    }
    
    cout<<sum<<endl ;
    for(int i=0;i<vi.size();i++){
        cout<<vi[i]<<" " ;
    }
    return 0 ;
}