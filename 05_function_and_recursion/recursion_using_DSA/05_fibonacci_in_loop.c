#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>

int fibonacci(int x){
    int to=0,t1=1;
    int s=0;
    if (x<=1)
        return x;
   
    for (int i = 2; i <= x; i++)
    {
        s=to+t1;
        to=t1;
        t1=s;
        
    }
    return s;
    
}
int main()
{
    printf("%d",fibonacci(7));
    return 0 ;
}