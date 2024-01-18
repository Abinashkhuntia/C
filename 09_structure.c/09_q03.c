//Write a program with a structure representing a Complex number.
#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct complexnum{
    int real;
    int img;
}comp;
void display(comp c){
    printf("the real part is %d\n",c.real);
    printf("the imaginary part is %d\n",c.img);
}
int main()
{
    comp complex[3];
    for ( int i = 0; i < 4; i++)
    {
        printf("enter the real part of thr num %d is",i+1);
        scanf("%d",&complex[i].real);

        printf("enter the imaginary part of thr num %d is",i+1);
        scanf("%d",&complex[i].img);
    }
    for ( int i = 0; i < 4; i++){
        display(complex[i]);
    }   
    return 0 ;
}