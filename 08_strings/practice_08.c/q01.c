//Write a Program to Find the Frequency of given Character by user in a String .
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int count=0;
    char c ;
    char str[40];
    printf("enter the string\n");
    gets(str);

    printf("enter the string that you want ");
    scanf("%c",&c);

    for ( int i = 0; i < sizeof(str); i++){
        if (c==str[i])
        {
            count++;
        }
    // return count;
    }
    printf(" freqency is is %d",count);
    return 0 ;
}