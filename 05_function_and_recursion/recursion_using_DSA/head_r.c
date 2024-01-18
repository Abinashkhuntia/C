#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
void fun1(int n){
    if(n>0)
    {
        fun1(n-1);
        printf("%d",n);
    }
}
int main()
{
    int x=3;
    fun1(x);
    return 0 ;
}