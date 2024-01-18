//Enter all the naurals numebrs by do while loop.
#include <stdio.h>
#include <math.h>
int main()
{
    int i=0,n;
    printf("enter natural number \n");
    scanf("%d",&n);
    do{
        printf("the value of i is %d\n",i);  
        i++;
    }while (i<=n);
    return 0 ;
}
