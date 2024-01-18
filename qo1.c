//1) Write a Program to Find Sum of N Natural Numbers (entered by users) using Recursion
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int sum_of_naturals_nos(int n){
    if (n!=0){          //base case
        return n+sum_of_naturals_nos(n-1);   //recursive call
    }
    else{                   
        return 0;
    }
}
int main()
{
    int num;
    printf("enter the naturals no :");
    scanf("%d",&num);
    printf("Sum of N Natural Numbers is %d", sum_of_naturals_nos(num));
    return 0 ;
}