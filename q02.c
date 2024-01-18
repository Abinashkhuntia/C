//2) Write a Program to Calculate Factorial of a Number Using Recursion
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
// 3!=3*2*1
int factorial(int x){
    int fact=1;
    if (x>1)
    {
        return x *factorial(x-1);
    }
    else
        return 1;
    // return fact;
}
int main()
{
    int num;
    printf("enter the naturals no :");
    scanf("%d",&num);
    printf("factorial of N Natural Numbers is %d",factorial(num));
    return 0 ;
}

