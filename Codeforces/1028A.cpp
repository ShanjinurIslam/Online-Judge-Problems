#include <iostream>
#include <string>
#include <vector>
using namespace std ;

int main(){
    int a,b ;
    cin>>a>>b ;
    vector<int> rows;
    vector<int> colmn ;
    int fr,fc,lr,lc ;
    string str ;
    
    for(int i=0;i<a;i++){
        cin>>str ;
        for(int j=0;j<b;j++){
            if(str[j]=='B'){
                rows.push_back(i) ;
                colmn.push_back(j) ;
            }
        }
    }
    
    fr = rows[0] + 1 ;
    fc = colmn[0] + 1;
    lr = rows[rows.size()-1] + 1 ;
    lr = colmn[colmn.size()-1] + 1 ;
    
    int finalr = (rows[0] + rows[rows.size()-1])/2 + 1 ;
    int finalc = (colmn[0] + colmn[colmn.size()-1])/2 + 1 ;
    
    cout<<finalr<<" "<<finalc<<endl ;
    
}