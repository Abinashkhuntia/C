//Write a program with a structure representing a Complex number.
#include <stdio.h>
#include <math.h>
#include <string.h>
struct complex {
    int real ,img;
};
int main()
{
    struct complex x1;
    x1.real=x1.img=21;
    printf("the real part is %d\n",x1.real);
    printf("the imaginary part is %d\n",x1.img);
    return 0 ;
}