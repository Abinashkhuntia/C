#include <stdio.h>
#include <math.h>
int main()
{ 
    int rating ;
    printf("enter a number \n");
    scanf("%d",&rating);
    switch (rating)
    {
    case 1 :
        printf("its 1\n");
        break;
    case 2 :
        printf("its 2\n");
        break;
    case 3 :
        printf("its 3\n") ;
        break;
    case 4 :
        printf("its 4\n") ;
        break;
    case 5 :
        printf("its 5\n") ;
        break;
    default:
        printf("go back saiman !\n");
        break;
    }

return 0 ;
}