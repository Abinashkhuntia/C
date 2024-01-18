//Write a program to modify a file containing an integer to double its value.
// If old value = 2, then new file value = 4
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *ptr1; 
    int num;
    ptr1=fopen("a.txt","r");
    fscanf(ptr1,"%d",num);
    int num2=num*2;
    ptr1=fopen("a.txt","w");
    fprintf(ptr1,"%d",num2);
    fclose(ptr1);
    return 0 ;
}

