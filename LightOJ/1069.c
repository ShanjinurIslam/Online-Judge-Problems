#include <stdio.h>
 int mod(int x)
 {
     if(x>=0)
     {
         return x ;
     }

     else
        return -x ;
 }

 int main()
 {
     int n ;
     scanf("%d" , &n) ;
     int i ;
     for(i=0;i<n;i++)
     {
         int time = 0 ;
         int a,b ;
         scanf("%d%d" , &a , &b) ;
         if(a==b)
         {
             time += 9 ;
             time += 10 ;
             time += a*4 ;
         }

         else
         {
             time +=9 ;
             time += 10 ;
             time += mod(a-b)*4 ;
             time += a*4 ;
         }

         printf("Case %d: %d\n" , i+1 , time) ;
     }
 }
