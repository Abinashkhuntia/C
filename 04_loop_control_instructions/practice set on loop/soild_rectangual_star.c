//soid rectangual star
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    for(int i = 0 ;i<3;i++){
        // printf("%d\n",i); // i = 0,1,2 .
        for (int j = 0; j < 4; j++){  // for i=0 , j=0,1,2,3 ->"****"
            printf("*");              // for i=1 , j=0,1,2,3 ->"****"
        }                             // for i=2 , j=0,1,2,3 ->"****"
        printf("\n");
    }
    return 0 ;
}