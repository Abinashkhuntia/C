//3) Write a Program that calculates the standard deviation of 3 data using arrays
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int arr[3],deviation[3],sum,sum_of_deviation;
    float avg,avg2 ;
    for (int i = 0; i < 3; i++)
    {
        printf("enter your nos :");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/3;
    for (int i = 0; i < 3; i++)
    {
        deviation[i]=arr[i]-avg;
        scanf("%d",&deviation[i]);
        sum_of_deviation=sum_of_deviation+deviation[i];
        
    }
    avg2=sum_of_deviation/3;

    printf("%d",avg2);
    // return sum_of_deviation/3 ;
    return 0;
}