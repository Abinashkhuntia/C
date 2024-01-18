#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
//showing error
// double e(int x,int n){
//     static double s=1;
//     if (n==0)
//         return 0;
//     s=1+(s*(double)x)/n;
//     return e(x,n-1);
    
// }
// int main()
// {
//     printf("%lf\n",e(3,10));
//     return 0 ;
// }

double e(int x ,int n){
    double s=1;
    double den=1;
    double num=1;
    int i;
    for (i=1; i<=n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s ;
}
int main()
{
    printf("%lf\n",e(3,10));
    return 0 ;
}