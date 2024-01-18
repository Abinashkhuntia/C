#include <stdio.h>
#include <math.h>
int main()
{
    int marks[4];
    int  *ptr;
    // int *ptr=&marks[0];  same as
    ptr=marks;
    // int x=10;

    for(int i=0;i<4;i++){     //accessing array using pointer (taking input)
        // printf(" For %d ")
        printf("enter the %dth number:\n",i+1); 
        scanf("%d",ptr);
        ptr++;
        // printf ("%d",x);
    }

    for(int i=0;i<4;i++){       //accessing array using pointer (printing
        printf("for %d , your number is %d\n",i, marks[i]);
        // printf ("%d",x);
    }
    // printf("for %d , your number is %d\n",0, marks[0]);
    // printf("for %d , your number is %d\n",1, marks[1]);
    // printf("for %d , your number is %d\n",2, marks[2]);
    // printf("for %d , your number is %d\n",3, marks[3]);
    return 0 ;
}
/* 
marks[4] is an array of 4 integers*/