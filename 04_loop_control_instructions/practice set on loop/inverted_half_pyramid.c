//inverted_half_pyramid
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    for(int i=0;i<6;i++){
        for ( int j = 6; j>i; j--)   //for i=0(lin1),for loop2 i=1 so,6>1,6>2,6>3,6>4,6>5 -> *****
        {
            printf("*");

        }
        printf("\n");
    }
    return 0 ;
}