#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>

int fun(int n){
    if(n>0)
        return (n-10) ;
    else
        return fun(fun(n+11));       
}

int main()
{
    printf("%d",fun(95));
    return 0 ;
}