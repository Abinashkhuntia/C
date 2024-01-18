#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int n ,x=1 ;
    char string[n];
    // int *p=string[0];
    int scount =0 ;
    int hcount =0 ;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        printf("enter the size of the %d elements : ",i+1);
        scanf("%d",&string[i]);
    }
    for (int i = 1; i < n; i++)
        for (int j = i; i <= 0 ; i--)
            if (string[i]>string[j])
                x++ ;
        
            return x ;
        
    
    
    return 0 ;
}