//4) Write a Program that calculates the power of a number using recursion
// where base and exponent is entered by the user.
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int power(int a,int b){
    if (a==0 && b!=0){
        return 0;  }
    if(b=0 && a!=0){
        return 1;  }
    if (a==0 && b==0){
        return 0; }
    else{
        return a * power(a*(b-1));
    }
}
int main()
{
    int a,b;
    printf("enter the base");
    scanf("%d",&a);
    printf("enter the power");
    scanf("%d",&b);
    printf("Sum of N Natural Numbers is %d",power(a,b));
    return 0 ;
}