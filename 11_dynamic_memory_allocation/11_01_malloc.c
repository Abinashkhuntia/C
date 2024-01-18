#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr;
    printf("size of the data int type in this system is : %d \n",sizeof(int));
    ptr=(int *)malloc(6*sizeof(int));  // sizeof(int) is the size of the array 
    printf("%d \n ",sizeof(ptr));           // sizeof(ptr) is the size of the pointer = size of int
    for (int i = 0; i < 6; i++){  //       // 6 is the size of the array / 6 is the space for six intigers
        // ptr[i]=i; //this made the intilial elements as zero .
        printf("enter the value of %d element \n ",i);    
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++){
        printf("the value of %d is %d\n", i,ptr[i]);
    }
    return 0 ;
} 