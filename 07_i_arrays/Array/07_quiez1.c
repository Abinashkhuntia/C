//Write a program to accept marks of five students in an array and 
// print them to the screen.
#include <stdio.h>
#include <math.h>
int main()
{
    int marks[5] ;
    
    for(int i=0;i<5;i++) // this loop stores the value of i for given mark[i]
    {
        printf("enter marks for student %d is :",i+1); 
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++) //this one will print the following
    {
        printf("enter marks for student %d is %d \n",i+1, marks[i]); 
    }

    return 0 ;
}