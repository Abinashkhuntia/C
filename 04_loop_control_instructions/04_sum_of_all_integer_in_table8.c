#include <stdio.h>
#include <math.h>
int main()
{
    int i,sum=0,x;
    for(int i=10;i;i--)
    {
        printf("8 X %d = %d\n",i,x=i*8);
        sum+=x;
    }
     printf("sum is :%d\n",sum); 
        return 0 ; 
}