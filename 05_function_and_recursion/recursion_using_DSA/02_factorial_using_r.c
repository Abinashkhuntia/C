#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int factorial(int n){
    if (n==0)  
        return 1;
    else
        return factorial(n-1)*n;    // time O(n)
}                                     //space O(n)
int main()
{
    printf("%d",factorial(3));
    return 0 ;
}