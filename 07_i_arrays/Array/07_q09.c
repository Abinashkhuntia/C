//Create a three-dimensional array and
//print the address of its elements in increasing order.
#include <stdio.h>
#include <math.h>
int main()
{
    int arr[1][2][3];
    for (int i = 0; i <1; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 3; k++)
            {
                printf("the adress of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
            }
            
        }
        
    }
    return 0 ;
}