//hollow_rectangle_star
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 5; j++)
        {
            printf("*");
            if (i==1)
            {
                printf("   *");
                break;
            }
            else continue;
        }
        printf("\n");
    }
    
    return 0 ;
}