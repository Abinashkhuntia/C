#include <stdio.h>
#include <math.h>
//function prototype//
//this will take int 2 inputs as a parameters and then give a int type result
int sum(int a,int b){
    int result;
    result= a+b;
    return result;
    // return a+b; (alternative way to do it) ,can skip the above 3 lines
}
int main()
{
    printf("%d\n",sum(7,5));
    return 0 ;
}