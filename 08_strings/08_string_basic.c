
//print string (convinient)!
#include <stdio.h>
#include <math.h>
int main()
{
    // char str[]={'a','b','c','\0'};
    // char str[]="abc"; // for entair string
    char *ptr="abc"; //
    printf("%s\n ",ptr);
    return 0 ;
}


#include <stdio.h>
#include <math.h>
int main()
{
    char s[34];
    printf("enter your name ");
    // scanf("%s",s); // for single woed
    gets(s);// for multi word strings
    // printf("you are %s",s);
    puts(s);//"prints multi words strings and add cursor to the next line"  
    return 0 ;
}