#include<cstdio>
#include<cstdlib>

using namespace std;

bool distinct(char x[5])
{
    int digit[10]={0,0,0,0,0,0,0,0,0,0};
    int i,temp;
    for(i=0;x[i]!=0;i++)
    {
        temp=x[i]-'0';
        digit[temp]++;
    }
    /*
    for(i=0;i<10;i++)
    {
        printf("%d ",digit[i]);
    }
    printf("\n");
    */
    for(i=0;i<10;i++)
    {
        if(digit[i]>=2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char x[5];
    int n;
    scanf("%d",&n);
    n+=1;
    while(1)
    {
        itoa(n,x,10);
        if(distinct(x))
        {
            printf("%s",x);
            break;
        }
        n++;
    }
    return 0;
}