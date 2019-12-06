//
//  main.cpp
//  Codeforces-1023A
//
//  Created by Shanjinur Islam on 24/8/18.
//  Copyright © 2018 Shanjinur Islam. All rights reserved.
//

#include <iostream>
using namespace std ;

int main(int argc, const char * argv[]) {
    int a,b ;
    char *str1,*str2 ;
    cin>>a>>b ;
    str1 = new char[a+1] ;
    str2 = new char[b+1] ;
    
    cin>>str1>>str2 ;
    
    int pos = -1 ;
    for(int i=0;i<a;i++){
        if(str1[i]=='*'){
            pos = i ;
            break ;
        }
    }
    
    if(a-1>b){
        cout<<"NO"<<endl ;
    }
    else{
        if(pos==-1 && (a!=b)){
            cout<<"NO"<<endl ;
        }
        else{
            int len1 = pos ;
            int len2 = a - (pos + 1);
            
            bool tem = true ;
            for(int i=0;i<len1;i++){
                if(str1[i]!=str2[i]){
                    tem = false ;
                    break ;
                }
            }
            
            if(tem!=false){
                for(int i=0;i<len2;i++){
                    if(str1[pos+1+i]!=str2[(b-len2)+i]){
                        tem = false ;
                        break ;
                    }
                }
            }
            
            if(tem==true){
                cout<<"YES"<<endl ;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}