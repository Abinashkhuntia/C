//factorial using for loop.
#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,factorial=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    for (i = n; i ; i--)
    {
        factorial*=i;
    }
    printf("the factoraial of agiven number is:%d\n",factorial);
    return 0 ;
}

//factorial using while loop.
#include <stdio.h>
#include <math.h>
int main()
{
    int i=1,n ,factorial=1;  
    printf("enter a number:\n");
    scanf("%d",&n);
    while (i<=n)
    {
        factorial*=i;
        i++;
    }
    printf("the factoraial of agiven number is:%d\n",factorial);
    return 0 ;
}