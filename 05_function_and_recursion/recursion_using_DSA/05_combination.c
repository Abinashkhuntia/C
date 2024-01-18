#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int factorial(int n){
    if (n==0)  
        return 1;
    else
        return factorial(n-1)*n;   
} 
int C(int n ,int r){
    int t1 ,t3,t2;
    t1=factorial(n);
    t2=factorial(r);
    t3=factorial(n-r);
    return t1/(t2*t3);
}
int main()
{
    printf("%d",C(4,2));
    return 0 ;
}