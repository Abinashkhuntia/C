#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
struct array {
    int *A;
    int size;
    int length;
};
void display ( struct array arr,int n){
    printf("elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr.A[i]);
    }
    
}
int main()
{
    struct array arr;    
    int n,i;
    printf("enter the size of an array");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("enter the num");
    scanf("%d",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;
    display(  arr);
    return 0 ;
}