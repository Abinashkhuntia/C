#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr;
    // printf("%d",sizeof(int));
    ptr=(int *)calloc(4,sizeof(int));
    for (int i = 0; i < 4; i++){
        printf("enter the value of %d element ",i);    
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 15; i++){//if  i <15 then it gives garbage values
        printf("the value of %d is %d\n", i,ptr[i]);
    }
    return 0 ;
}