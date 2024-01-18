#include <stdio.h>
#include <string.h>
int main()
{
    char *s1= "harrry";
    char s2[]= "asaga";
    strcat(s2,s1);
    printf("length of the string:%s\n ",s2);//now s1 is in s2
    return 0 ;
}