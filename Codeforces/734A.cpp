#include <iostream>

using namespace std ;

int main(){
    int n ;
    cin>>n ;
    string s ;
    cin>>s ;
    int A = 0 ;
    int D = 0 ;
    for(int i=0;i<n;i++){
        if(s[i]=='A') A++ ;
        if (s[i] == 'D')
            D++;
    }

    if(A>D){
        cout<<"Anton"<<endl ;
    }
    if (A < D)
    {
        cout << "Danik" << endl;
    }
    if (A == D)
    {
        cout << "Friendship" << endl;
    }
    return 0 ;
}