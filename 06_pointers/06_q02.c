/*Write a program having a variable i. Print the address of i.
Pass this variable to a function and print its address.
Are these addresses same? Y?
--> so clearly  thse address is not same , for sure main() fun. pass the value but
 have a different location for this same value */
 
#include <stdio.h>
#include <math.h>
int address_of_a_variable(int i);
int main()
{
    int i;
    int *j=&i; 
    printf("enter any nummber :");
    scanf("%d",&i);
    printf("the address of a variable i :%u\n",j);
    address_of_a_variable(i);
    return 0 ;
}
int address_of_a_variable(int i){
    printf("the address of a variable i :%u\n",&i);
}