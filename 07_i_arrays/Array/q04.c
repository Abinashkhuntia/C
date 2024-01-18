//4) Write a Program that takes the array of five element and
// the elements of that array are accessed using pointer.
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int arr[5] ,n;
    int *ptr;
    for (int i = 0; i < 5; i++)
    {
        printf("enter your nos :");
        scanf("%d",&arr[i]);
        ptr= &arr[i];
    }
    printf("enter the no you want ");
    scanf("%d",&n);
    printf("it's %d",*(&arr[n]));
    return 0;
}