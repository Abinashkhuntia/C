#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>

int F[10];
int fibonacci_using_array(int n){
    if(n<=1){
        F[n]=n;
        return n;}
    else{
        if(F[n-2]==-1)
            F[n-2]=fibonacci_using_array(n-2);
        if(F[n-1]==-1)
            F[n-1]=fibonacci_using_array(n-1);
        F[n]=F[n-2]+F[n-1];
        return  F[n];
 }
}
int main()
{
 int i;
 for(i=0;i<10;i++)
    F[i]=-1;

 printf("%d\n",fibonacci_using_array(7));
 return 0;
}