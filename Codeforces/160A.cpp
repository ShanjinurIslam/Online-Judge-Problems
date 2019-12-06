#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    int n ;
    cin>>n ;
    int sum = 0 ;
    vector<int> inputs ;
    for(int i=0;i<n;i++){
        int v ;
        cin>>v ;
        sum += v ;
        inputs.push_back(v);
    }
    sort(inputs.begin(),inputs.end()); //this is sorting part
    int my_share = 0 ;
    int count = 0 ;
    for(int i=n-1;i>=0;i--){ //this is greedy part 
        if(my_share>sum/2) break ;
        my_share += inputs[i];
        count ++ ;
    }

    cout<<count<<endl ;

    return 0 ;
}