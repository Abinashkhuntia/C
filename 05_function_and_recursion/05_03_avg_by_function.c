#include <stdio.h>
#include <math.h>
float avg(int a, int b, int c);
int main()
{
    int a,c,b;
    printf("enter no 1st num :");
    scanf("%d",&a);
    printf("enter no 2nd num :");
    scanf("%d",&b);
    printf("enter no 3rd num :");
    scanf("%d",&c);
    printf("avg is :%.3f",avg(a,b,c));
    return 0 ;
}
float avg(int a, int b, int c){
    float result;
    result= (float)(a+b+c)/3;
    return result;
}