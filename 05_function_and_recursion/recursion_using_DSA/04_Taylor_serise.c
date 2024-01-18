#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
float e(int x,int n){   // x what could be the value of e^x upto n terms
    static int p=1,f=1;
    int R;
    if (n==0)
        return 1;
    else 
        R=e(x,n-1);   //
        p=p*x;
        f=f*n;
        return R+p/f;
}
int main()
{
    printf("%f",e(2,3));
    return 0 ;
}