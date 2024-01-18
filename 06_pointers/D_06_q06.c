//q(6) ERR0R
//using call by value and verify that it doesn’t change the value of the said variable ?

#include <stdio.h>
#include <math.h>
int new_value(int i){
    int temp= i;
    printf("the current value of i by value is  :%d\n",temp);
}
int main()
{
    int i;
    int *j=&i; 
    printf("enter any nummber :");
    scanf("%d",&i);
    new_value(i);
    i=i*10;
    printf("th new value of a variable i is :%d\n",i);
    return 0 ;
}