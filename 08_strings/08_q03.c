//Write your own version of strlen() function from <string.h>
#include <stdio.h>
#include <math.h>
int strln(char *string){
    char *ptr = string;
    int len=0;
    while (*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char string[]="shdsdah"; 
    int len = strln(string);
    printf("no of character is %d\n",len);
    return 0 ;
}