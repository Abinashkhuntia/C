// print all numbers between 10 to 20 by intialazing loop counter as i=0
#include <stdio.h>
#include <math.h>
int main()
{
    int i=0;
    while(i<=20)
    {
        if(i>=10)// step3> it will excecute only if the i >=10 ,step2> it only filter out the reqired .
        printf("%d\n",i);//
        i++;//step1.> in the absens of the if statement it will excute upto 20  
    }    
    return 0 ;
} 