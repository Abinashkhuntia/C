/*Write a program to change the value of a variable to ten times its current value.
Write a function and pass the value by reference*/

#include <stdio.h>
#include <math.h>
int new_value(int *i){
    int temp= *i;
    printf("the current value of i by reference is  :%d\n",temp);
}
int main()
{
    int i;
    int *j=&i; 
    printf("enter any nummber :");
    scanf("%d",&i);
    i=i*10;
    printf("th new value of a variable i is :%d\n",i);
    new_value(&i);
    return 0 ;
}
