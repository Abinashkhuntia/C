#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *ptr;// why its in capital
    int num, num2;
    ptr=fopen("sample.txt","w");
    fprintf(ptr,"the 1");//rewrite everything
    fclose(ptr);
    // printf("the valuein the file is %d\n ",num);
    // printf("the valuein the file is %d",num2);
    return 0 ;
}