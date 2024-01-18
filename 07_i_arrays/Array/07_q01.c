/*Create an array of 10 numbers. 
Verify using pointer arithmetic that (ptr+2) points to the third element
where ptr is a pointer pointing to the first element of the array.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int arr[10], *ptr;
    ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2]){
        printf("both indicates to the same memory address\n");
    }
    else{
        printf("the do not indicates to the  same memory address\n");
    }
    return 0 ;
}