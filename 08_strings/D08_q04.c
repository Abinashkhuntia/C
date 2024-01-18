//Write a function slice() to slice a string.
// It should change the original string such that it is now the sliced strings.
//Take m and n as the start and ending position for slice
#include <stdio.h>
#include <math.h>
void slice(char *st , int m , int n){
    int i=0;
    while ((i+m)<n){
        st[i]=st[i+m];
        i++;
        }

    st[i]='\0';
    
}
int main()
{
    char st[]= "asdfg";
    slice(st,1,3);
    printf("the sliced string is %s",st);
    return 0 ;
}
