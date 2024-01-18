#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter a no \n");
    scanf("%d",&a);
    if(a==2){
        printf("its 2 \n");
        }
    else if (a==3){
        printf("its 3 \n");    
    }
    else if( a==4){
        printf("its 4 \n");
    }
    else {
        printf("its not 2 ,3or 4 \n");
    }
    return 0 ;
}