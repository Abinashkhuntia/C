#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int fun1(int n){
    static int x=0;             // Declaring the static variable ..its only have single copy 
    if(n>0){                       //  and by every cycle the value is updated 
        x++;                     
        return fun1(n-1)+x;
    }
    return 0;
}
int main()
{
    int a=5;
    printf("%d\n",fun1(a));      //here , the value of x is 5 but

    printf("%d",fun1(a));      //here , the value of x is 10 as it recrued through 5 more times 
    return 0 ;
}