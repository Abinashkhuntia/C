//Write a program to generate a multiplication table
// of a given number in text format. 
//Make sure that the file is readable and well-formatted
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *ptr;
    int num;
    printf("the num is ");
    scanf("%d",&num);
    ptr=fopen("mult_table.txt","w");
    for(int i=0;i<10;i++){
        fprintf(ptr,"%d X %d= %d\n",num,i+1,(i+1)*num);
    }
    fclose(ptr);
    return 0 ;
}