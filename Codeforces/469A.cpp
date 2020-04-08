#include <iostream>

using namespace std;

bool map[100] = {false} ;

int main()
{
    int n ;
    cin>>n ;
    int p ;
    cin>>p;
    for(int i=0;i<p;i++){
        int level ;
        cin>>level ;
        map[level-1] = true ;
    }

    int q ;
    cin>>q;
    for(int i=0;i<q;i++){
        int level ;
        cin>>level ;
        map[level-1] = true ;
    }

    for(int i=0;i<n;i++){
        if(!map[i]){
            cout<<"Oh, my keyboard!"<<endl;
            return 0 ;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}