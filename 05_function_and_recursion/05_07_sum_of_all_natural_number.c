#include <stdio.h>
#include <math.h>
int sum(int x);
int main()
{
    int a;
    printf("enter the num u want :");
    scanf("%d",&a);
    printf("sum  of %d is %d\n",a,sum(a));
    return 0 ;
}
int sum(int x){
    int a , result;
    result= a+sum(a-1); // imp. line
    return result;
}
