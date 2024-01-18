#include <stdio.h>
#include <math.h>
int main()
{
    int a=3;
    printf("%d %d %d",a,++a,a++); // in gcc compiler it will execute from right to left.
    return 0 ;
}