#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
struct array {
    int *A;
    int size;
    int length;
};
void display ( struct array arr){
    printf("elements are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n",arr.A[i]);
    }
    
}
void append(struct array *arr , int x)
{
    if (arr->length)
    {
        /* code */
    }
    
}
int main()
{
    struct array arr={{21,32,44,24,4},2,1}
    display(arr);
    return 0 ;
}
