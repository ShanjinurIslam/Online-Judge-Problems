#include <iostream>
#include <cstring>

using namespace std ;

bool prime[1000000] ;
__int64 primes[15000] ;

void sieve_algo(){
    memset(prime, true, sizeof(prime));
    for (__int64 p=2; p*p<=1000000; p++)
        {
            if (prime[p] == true)
            {
                for (__int64 i=p*p; i<=1000000; i += p)
                    prime[i] = false;
            }
    }

    __int64 count = 0 ;

    __int64 p=2 ;
    __int64 val ;
    while(count<=15000){
        if (prime[p]){
            primes[count]=p ;
            count++ ;
        }
        p++ ;
    }
}


int main(){
    int n ;
    sieve_algo() ;
    cin>>n ;
    for(int i=0;i<n;i++){
        int j ;
        cin>>j ;
        cout<<primes[j-1]<<endl ;
    }
    return 0 ;
}
