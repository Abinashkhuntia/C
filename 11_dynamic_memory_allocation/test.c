// Write a program to dynamically create an array of size 6 capable of storing 6 integers.
// Use the array in Problem 1 to store 6 integers entered by the user.
// Solve problem 1 using calloc().
// Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
// Create an array of the multiplication table of 7 up to 10 (7x10=70). Use realloc to make it store 15 numbers(from 7x1 to 7x15).
// Attempt problem 4 using calloc().
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(10*sizeof(int));
    for (int i = 1; i <= 10; i++)
    {
        printf(" 7 X %d = %d \n ", i,i*7);
    }

    ptr=realloc(ptr ,15*sizeof(int));

    for (int i = 1; i <= 15; i++)
        {
            printf(" 7 X %d = %d \n ", i,i*7);
        }
    return 0 ;
}