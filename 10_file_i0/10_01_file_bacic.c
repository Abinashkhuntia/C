#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    FILE *ptr;
    ptr=fopen("sample.txt","r");//-->its used to read the file
    ptr=fopen("sample2.txt","w");//-->its used to write the  ,
    // it will creat a new file with the name sample2.txt
    return 0 ;
}