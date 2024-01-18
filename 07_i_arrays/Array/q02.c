//2) Write a Program that takes n element from user and
// displays the largest element of an array
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("the size of n is :");
    scanf("%d",&n);
    int arr[400], largest;
    // int largest=0;
    for ( int i = 0; i < n; i++)
    {
        printf("enter your nos :");
        scanf("%f",&arr[i]);
        
    }
    for ( int i = 0; i < n; i++){
        largest=arr[0];
        if (largest>arr[i])
        {
            largest=arr[i];
        }
    }
    printf("largest :%d",largest);
    return 0 ;
}