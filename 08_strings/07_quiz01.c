//Create a string using " " and print its content using a loop.
#include <stdio.h>
#include <math.h>
int main()
{
    // char str[]={'a','b','c','\0'};
    char str[]="abc";
    char *ptr=str;
    while (*ptr!='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
    
    return 0 ;
}