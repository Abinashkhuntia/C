#include <stdio.h>
#include <math.h>
int main()
{
    int n=5;
    int i=0;
    while(i<10)
    {	
        i++;    
        if(i !=n)//its will excute all the numbers except 5.
        continue;// its takes the loop its initial possition.
        else
        printf("%d\n",i); 
    }
    return 0 ;
}