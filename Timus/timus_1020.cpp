#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std ;

struct coordinates{
    double x,y ;
};

double distance(struct coordinates a, struct coordinates b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)) ;
}

int main(){
    int N;
    double r ;
    cin>>N>>r ;
    struct coordinates node[N] ;
    for(int i=0;i<N;i++){
        cin>>node[i].x>>node[i].y ;
    }
    double sum = 0 ;
    for(int i=0;i<N;i++){
        sum += distance(node[(i)%N],node[(i+1)%N]) ;
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    sum += acos(-1.0)*N*0.5*r ;
    cout<<sum<<endl ;
}
