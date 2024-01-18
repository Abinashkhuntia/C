#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr,*ptr2;
    ptr=(int *)malloc(4*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr2=(int *)malloc(600*sizeof(int));//it allocates a large no of memomry with every loop,and without closing it
        printf("enter the value of %d element ",i);    
        scanf("%d",&ptr[i]);
        free(ptr2);//this will free off the spaece .
    }
    for (int i = 0; i < 10; i++){
        printf("the value of %d is %d\n", i,ptr[i]);
    }
    return 0 ;
} 