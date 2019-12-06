#include <iostream>
#include <cmath>
using namespace std ;

int main(){
    long long int value1 ;
    int k ;
    cin>>value1>>k ;
    long long int value = value1 ;
    long long int tem = value ;
    int res = 0 ;
    int div = pow(10,k) ;
    int m = 10 ;
    if(value>=div){
        while(value>=div){
            if(value==div || value%div==0){
                break ;
            }
            else{
                if(tem%10!=0){
                    res++ ;
                    value = value/m ;
                    value = value*(m/10) ;
                    if(value%div==0){
                        break ;
                    }
                }
                else{
                    m *= 10 ;
                }
                tem = tem/10 ;
            }
        }
        if(value<div){
            bool zero = false ;
            while(value!=0){
                int tem = value%10 ;
                if(tem==0){
                    zero = true ;
                }
                res++ ;
                value /=10 ;
            }

            if(zero==true){
                res = res-1 ;
            }
        }
    }
    else{
        bool zero = false ;
        while(value!=0){
            int tem = value%10 ;
            if(tem==0){
                zero = true ;
            }
            res++ ;
            value /=10 ;
        }

        if(zero==true){
            res = res-1 ;
        }
    }
    cout<<res ;
    return 0 ;
}
