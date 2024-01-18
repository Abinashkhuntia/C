#include <stdio.h>
#include <math.h>
int main()
{
    int i=5;
    printf("the value of i++ is %d\n",i++);// it will first print then increment to i+1=6
    printf("the value of i is %d\n",i);

    printf("the value of ++i is %d\n",++i);//it will first increment to 7 and print it's 
    printf("the value of i is %d\n",i);
    printf("the value of i+=10 [i=i+10] is %d\n",i+=10);// just like there is -=,*=,/=,%=  .
    return 0 ;
}