//Write a program to read a text file character by character and 
//write its content twice in a separate file.
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1=fopen("text_file01.txt","r");
    ptr2=fopen("text_file02.txt","w");                      //file read kala
    char c=fgetc(ptr1);// to intialise the copying     // file copy kala
    while (c!=EOF){                // how to print this in 2 lines
        fputc(c,ptr2);                                     // file ta write kala
        fputc(c,ptr2);                                     // file ta write kala
        char c=fgetc(ptr1);                                     // file copy kala
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0 ;
}
//fgetc - read a character from a file
//fputc - write a character to a file