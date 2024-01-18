#include <stdio.h>
#include <string.h>
int main()
{
    char *s1= "harrry";
    char s2[]="harrry";
    strcmp(s1,s2);// string is same then 0
    // else string 1 asccii value - string 2 assici value
    // example s1= wer ,s2 wert then 0-116 = -1 negative value
    printf("length of the string:%d\n ",strcmp(s1,s2));
    return 0 ;
}