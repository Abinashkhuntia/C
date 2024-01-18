/*Write a program to change the value of a variable to ten times its current value.
Write a function and pass the value by reference*/

#include <stdio.h>
#include <math.h>
int address_of_a_variable(int *i);
int main()
{
    int i;
    int *j=&i; 
    printf("enter any nummber :");
    scanf("%d",&i);
    printf("th new value of a variable i is :%d\n",i*10);
    address_of_a_variable(i);
    return 0 ;
}
int address_of_a_variable(int *i){
    int temp= *i;
    // result*=10
    printf("the address of a variable i :%d\n",temp);
}
//q(6)
//using call by value and verify that it doesn’t change the value of the said variable
