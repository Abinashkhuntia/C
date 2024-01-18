/* Write a program to print the value of a variable i 
  by using the "pointer to pointer" type of variable.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i=5;
    int *j=&i;
    int **k=&j;

    printf(" the value of variable i is :%d\n",**k);// check

    return 0 ;
}