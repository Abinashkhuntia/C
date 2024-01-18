//Write a program to take a string as an input from the user using %c and %s.
//Confirm that the strings are equal.

#include <stdio.h>
#include <math.h>
int main()
{
    char st1[43];
    char st2[43];
    char c; int i =0;
    printf(" your 1st string ");
    scanf("%s",st1);
    printf(" your 2nd string character by character ");
    while(c !='\n'){
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i]='\0';
    printf(" your 1st string IS  %s\n",st1);
    printf(" your 2nd string Is %s\n",st2);
    return 0 ;
}