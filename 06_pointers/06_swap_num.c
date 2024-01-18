#include <stdio.h>
#include <math.h>
// void wrong_swap(int x, int y);//-->1
void swap_alt(int *x, int *y);
int main()
{
    int x=2;int y= 3;
    printf("the value of x and y id %d and %d\n",x,y);
    // wrong_swap(x,y);// it will not affect the, the variable values.
    swap_alt(&x,&y);// its just swap the value  of these variable addreses x and y
    printf("the value of x and y is %d and %d\n",x,y);
    return 0 ;
}
// void wrong_swap(int x, int y){
//     int temp;
//     temp= x; // temp =2 
//     x = y; // x=3  
//     y = temp;//y=2
// }
// void swap(int *x, int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }


void swap_alt(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
    