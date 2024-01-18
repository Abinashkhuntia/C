#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    printf("Enter your number:");
    scanf("%d",&n);
    for ( i = 0; i <= (n*9); i=i+n)
    {
        printf(":%d\n",i+n);
    }
    return 0 ;
}

