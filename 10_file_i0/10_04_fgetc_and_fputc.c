#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *ptr;// why its in capital
    ptr=fopen("sample.txt","r");
    // char c=fgetc(ptr);
    // printf("the valuein the file is %c\n ",fgetc(ptr));
    // printf("the valuein the file is %c\n ",fgetc(ptr));
    // printf("the valuein the file is %c\n ",fgetc(ptr));
    // printf("the valuein the file is %c\n ",fgetc(ptr));
    // // fclose(ptr);
    ptr=fopen("putc_demo","w");
    char c= fputc('d',ptr);
    return 0 ;
}