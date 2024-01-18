// Write a program to print first n natural numbers using for loop
#include <stdio.h>
#include <math.h>
int main()
{
    int i ,n;
    printf("enter your end number :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",i+1);
    }
    return 0 ;
}