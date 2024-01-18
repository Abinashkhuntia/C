#include <stdio.h>
#include <math.h>
int main()
{ 
    int age;
    int vippass = 0;
    vippass=1;
    printf("enter your age \n");
    scanf("%d",&age);
    if (age>= 18 && age<=90 ) || !(vippass=1) // use of "AND" "OR"and  " NOT"
    {
          printf("u can drive \n");
    }
    else
    {
        printf("no, u cant.");
    }
    
return 0 ;
}