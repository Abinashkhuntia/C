// The increment of address according to their type of given. 
#include <stdio.h>
#include <math.h>
int main()
{
    int i=12;
    int *ptr=&i;
    printf("the value of ptr is :%d\n",ptr);
    ptr++;
    printf("the value of ptr is :%d\n",ptr);
    printf("the address of ptr is :%u\n",&ptr);
    printf("the value inside the  ptr++ is :%d\n",*(&ptr));
    return 0 ;
//output-->
// the value of ptr is :2686684
// the value of ptr is :2686688
// the address of ptr is :2686680
// the value inside the  ptr++ is :2686688

    // char i='a';
    // char *ptr=&i;
    // printf("the value of ptr is :%d\n",ptr);
    // ptr++;
    // printf("the value of ptr is :%d\n",ptr);
    // return 0 ;

    // float i=1.2;
    // float *ptr=&i;
    // printf("the value of ptr is :%d\n",ptr);
    // ptr++;
    // printf("the value of ptr is :%d\n",ptr);
    // return 0 ;

    // double i=1.2;
    // double *ptr=&i;
    // printf("the value of ptr is :%d\n",ptr);
    // ptr++;
    // printf("the value of ptr is :%d\n",ptr);
    // return 0 ;


}