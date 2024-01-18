#include <stdio.h>
int sum(int a,int b);
int main()
{
    int a=3;
    int b= 4 ;
    printf(" the value of a and b before call  %d and %d \n",a,b);
    printf("%d\n",sum(7,5)); // calling fun by its value
    printf(" the value of a and b after call  %d and %d\n",a,b);

    return 0 ;
}
int sum(int a,int b){
    int c;
    c=a+b;
    a=12323; b=32312; /* these doesnt affect the end result because in main() fucn 
                        -> it copies the value of  a, b */
    // printf(" the value of a and b after call  %d and %d\n",a,b);
    return 0;
    }