#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
float e(int x,int n){   
    int s=1;
    for (n>0; n--;)
    {
        s=1+(x/n)*s;
    }
    return s;    
}
int main()
{
    printf("%f/n",e(2,3));
    return 0 ;
}