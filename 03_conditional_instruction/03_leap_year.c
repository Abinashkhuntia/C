#include <stdio.h>
#include <math.h>
int main()
{
    int year;
    printf("enter the year \n");
    scanf("%d",&year);
    if(year%4==0){ // After if conditional statement we dont use ";"
        printf("its a leap year\n");
    }
    else{
        printf("no ,its not leap year \n");
    }
    
return 0 ;
}