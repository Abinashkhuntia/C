#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int k ,flag =0 ,m=k/2;

    printf("enter the num ");
    scanf("%d",&k);
    for (int i = 2; i < m; i++)
    {
        if(k%i==0)
            printf("not a prime");
            flag=1;
        break;
    }
    if (flag==1)
        printf("prime");
    return 0 ;
}