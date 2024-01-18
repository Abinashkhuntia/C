#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
struct pair
{
    int min , max ;
};


struct pair  getminmax(int arr[],int n){
    struct pair minmax ;
    int i ;
    if(n==0){
        minmax.max = arr[0];
        minmax.min = arr[0];
    }

    if(arr[0]> arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
        minmax.max = arr[1];
        minmax.min = arr[0];

    for (int i = 2; i < n; i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={21,24,4,12,5,87,2,234,53};
    int length_of_array=9;
    struct pair minmax= getminmax(arr, length_of_array);
    printf("nMinimum element is %d", minmax.min);
    printf("nMaximum element is %d", minmax.max);
    return 0 ;
} 