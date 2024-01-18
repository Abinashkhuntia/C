#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    printf("enter your 1st number:\n");
    scanf("%d",&a);
    printf("enter your 2nd number:\n");
    scanf("%d",&b);
    printf("enter your 3rd number:\n");
    scanf("%d",&c);
    printf("enter your 4th number:\n");
    scanf("%d",&d);
    if ((a>b)&&(a>c)&&(a>d)){
        printf("print %d is the gresttest number ",a);
        }
    else if ((b>a)&&(b>c)&&(b>d))
    {
       printf("print %d is the gresttest number ",b);
    }
    else if((c>a)&&(b<c)&&(c>d))
    {
       printf("print %d is the gresttest number ",c);
    }
    else if((d>a)&&(d>c)&&(d>a))
    {
       printf("print %d is the gresttest number ",d);
    }

    return 0 ;
}