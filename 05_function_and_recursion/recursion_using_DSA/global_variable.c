#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int x=0;                   //// Declaring the Global variable
int fun1(int n){            
    if(n>0){
        x++;                     //incremented by one in each cycle
        return fun1(n-1)+x;
    }
    return 0;
}
int main()
{
    int a=5;
    printf("%d",fun1(a));
    return 0 ;
}