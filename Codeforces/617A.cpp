#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int list[] = {5, 4, 3, 2, 1};
    int total_steps = 0;

    for (int i = 0; i < 5; i++)
    {
        if(x==0){
            break ;
        }

        if (x / list[i] > 0)
        {
            total_steps += x / list[i];
            x = x % list[i];
        }
    }
    cout<<total_steps<<endl ;
    return 0;
}