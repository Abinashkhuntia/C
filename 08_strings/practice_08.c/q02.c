//2) Write a Program to Find the Number of Vowels, Consonants,Digits and
// White Spaces in a String
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int Vowels=0,Digits=0 ,Consonants=0,White_Spaces=0;
    char c ;
    char str[40];
    printf("enter the string\n");
    gets(str);

    for ( int i = 0; i < sizeof(str);i++)
    {
        if (str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            ++Vowels;
            
        }
    }
    printf("freqency of Vowels is %d",Vowels);
    // printf(" freqency of Digits is %d",count);
    // printf(" freqency of Consonants is %d",count);
    // printf(" freqency of White_Spaces is %d",count);
    return 0 ;
}