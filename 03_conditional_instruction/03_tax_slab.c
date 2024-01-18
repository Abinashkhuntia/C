#include <stdio.h>
#include <math.h>
int main()
{
    float income;
    float tax=0;
    printf("enter your income \n");
    scanf("%f",&income);
    if(income>=250000 && income<=500000)
    {
       tax= tax+ 0.05*(income-250000);
    }
    if (income>500000 && income<=1000000)
    {
        tax= tax+ 0.20*(income-500000);
    }
    if (income>1000000)
    {
        tax=tax+30*(income-1000000);
    }
    printf("your income tax is %f",tax);
    return 0 ;
}