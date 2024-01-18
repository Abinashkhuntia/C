#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *ptr;// why its in capital
    int num, num2;
    ptr=fopen("sample.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("the valuein the file is %d\n ",num);
    printf("the valuein the file is %d",num2);
    return 0 ;
}