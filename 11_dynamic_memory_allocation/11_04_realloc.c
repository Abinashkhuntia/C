#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(4*sizeof(int));
    // printf("%d",sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d element ",i);    
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 4; i++){
        printf("the value of %d is %d\n", i,ptr[i]);
    }
    ptr=realloc(ptr,10*sizeof(int));//reallocation  , reusing the same memory location with a different size .
    for (int i = 0; i < 10; i++)
    {
        printf("enter the value of %d element ",i);    
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < 10; i++){
        printf("the value of %d is %d\n", i,ptr[i]);
    }
    return 0 ;
} 