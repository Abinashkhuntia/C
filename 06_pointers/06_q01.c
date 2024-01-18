/*Write a program to print the address of a variable.
 Use this address to get the value of this variable.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    int *j=&i; // value at the address , address of i
    printf("enter any nummber :");
    scanf("%d",&i);
    printf("the address of a variable i :%u\n",j);
    printf("the address of a variable i :%u\n",&i);
    printf("the value of a variable i :%d\n",*(j));
    printf("the value of a variable i :%d\n",*(&i));
    return 0 ;
}