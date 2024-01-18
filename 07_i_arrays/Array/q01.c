//1) Write a Program that takes N elements 
//(max. value of N is 100 and N is the float number specified by user) from user,
//stores data in an array and Calculates the average of those numbers.
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    float arr[100];
    float sum=0,avg;
    // int n ;
    // printf("Enter the number of elements\n");
    // scanf("%d",&n);
    int n;
    for ( int i = 0; i < 100; i++)
    {
        printf("enter %d element\n",i+1);
        scanf("%f",&arr[i]);
        if (arr[i]==-1)
            break;
        sum=arr[i]+sum;
        printf("%d\n",i);
        n=i;
    }
    avg=sum/n+1;
    // for (int i = 0; i < 100; i++)
    // {
    //     // sum=sum+arr[i];
    //     // avg=sum/n;
    // }
    
    printf("%f",avg);
    return 0 ;
}


