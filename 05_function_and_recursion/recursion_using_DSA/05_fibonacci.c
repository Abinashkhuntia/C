#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>

int fibonacci(int x){
    if(x<=1)
        return x;
    return fibonacci(x-2)+fibonacci(x-1);
}
int main()
{
    printf("%d",fibonacci(5));
    return 0 ;
}




