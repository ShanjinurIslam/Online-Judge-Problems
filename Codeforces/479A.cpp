#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int poss[8] ;
    poss[0] = a + b + c ;
    poss[1] = a * b * c ;
    poss[2] = a * b + c;
    poss[3] = a + b * c;
    poss[4] = a * (b + c);
    poss[5] = (a + b) * c;
    poss[6] = a + (b * c);
    poss[7] = (a * b) + c;

    int max = -1 ;
    for(int i=0;i<8;i++){
        if(max<poss[i]){
            max = poss[i];
        }
    }

    cout<<max<<endl ;
    return 0;
}