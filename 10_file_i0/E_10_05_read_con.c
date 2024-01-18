#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    FILE *ptr;
    char c;
    ptr=fopen("sample.txt","r");
    c=fgetc(ptr);
    while(c!=EOF){
        printf("the  charcters are:%c",c);
        c= fgetc(ptr);
        }
    return 0 ;
}