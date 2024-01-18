//Take name and salary of two employees as input from the user and
// write them to a text file in the following format:
// name1, 3300
//name2, 7700
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *ptr;
    ptr=fopen("employee.txt","w");
    char str1[30] , str2[30];
    int s1,s2;
    printf("enter the name  of e1 : \n");
    gets(str1);
    printf("enter the salary of e1 :\n ");
    scanf("%d",&s1);
    fprintf(ptr,"%s,%d \n",str1,s1);

    printf("enter the name 2 : \n ");
    gets(str2);
    printf("enter the salary of 2 : ");
    scanf("%d",&s2);
    fprintf(ptr,"%s,%d",str2,s2);
    return 0 ;
}

    