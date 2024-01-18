#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>

int C(int n ,int r){
    if (r==0||r==1)
        return 1;
    else
        return C(n-1,r-1)+C(n-1,r);
}
int main()
{
    printf("%d",C(4,2));
    return 0 ;
}