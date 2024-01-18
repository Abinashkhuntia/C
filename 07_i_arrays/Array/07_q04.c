#include <stdio.h>
#include <math.h>
int main()
{
    int mult[10],n;
    printf("the value of n is :");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        mult[i]=n*(i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf(" %d X %d= %d\n",n,i+1,mult[i]);
    }
    
    return 0 ;
}