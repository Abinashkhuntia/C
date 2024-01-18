#include <stdio.h>
#include <math.h>
int main()
{
    for (int i=0; i<1000; i++){
        printf("%d\n",i);
        if (i==5)
        break;// break exits the loop whenever it satisfied the if condition ;
        }
    return 0 ;
}