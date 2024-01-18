/*Write a program to create an array of 10 integers and 
store a multiplication table of 5 in it.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int mult[10];
    for (int i = 0; i < 10; i++)
    {
        mult[i]=5*(i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf(" 5 X %d= %d\n",i+1,mult[i]);
    }
    
    return 0 ;
}