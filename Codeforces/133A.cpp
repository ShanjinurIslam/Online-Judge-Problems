#include <iostream>
#include <cstring>

using namespace std ;

int count_H = 0 ;

int count_Q = 0;

int count_9 = 0;

int main(){
    char p[100];
    cin>>p ;
    int len = strlen(p);

    for(int i=0;i<len;i++){
        if(p[i]=='H'){
            count_H++ ;
        }
        if (p[i] == 'Q')
        {
            count_Q++;
        }
        if (p[i] == '9')
        {
            count_9++;
        }
    }

    if(count_H>0 || count_Q>0 || count_9>0){
        cout<<"YES"<<endl ;
    }
    else{
        cout<<"NO"<<endl ;
    }

    return 0 ;
}