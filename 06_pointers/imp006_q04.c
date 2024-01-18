/*Write a program using a "function" that calculates the sum and average of two numbers.
Use pointers and print the values of sum and average in main()*/
#include <stdio.h>
#include <math.h>
void sum_and_avg(int a,int b,int *sum,float *avg) // void can update values using reference
{   *sum=a+b;
    *avg=(float)(*sum)/2; // type casting (*sum) as float ! 
}
int main()
{   
    int a,b,sum;
    float avg;
    printf("enter a no");
    scanf("%d",&a);
    printf("enter a no");
    scanf("%d",&b);
    sum_and_avg(a,b,&sum,&avg); // 1st giving the address of sum and avg in the func.
    printf("sum is %d /n",sum);
    printf("avg is %f /n",avg);
    return 0 ;
}
