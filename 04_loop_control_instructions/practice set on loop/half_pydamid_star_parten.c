//half_pydamid_star_parten
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    for(int i=0;i<6;i++){
        // here i=0 , in this loop but
        for ( int j = 0;i>=j; j++) 
            printf("%d",i);                   // i=0 i,e first line (i>j)->(1>0) *
        // but here in the second loop , i=1 asusal
        {
            // printf("*");                   // i=0 i,e first line (i>j)->(1>0) *
                                        // i=1 for loop1(line2) , i=2 as incremented allready,2>0,2>1 ->**
        }
        printf("\n");
    }
    return 0 ;
}