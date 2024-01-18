#include <stdio.h>
#include <math.h>
int main()
{
    for ( int i = 100; i >= 10; i=i-10)
    {
        printf(":%d\n",i);
    } 
    return 0 ;
}

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int i;
//     for(int i=10;i;i--)
//     {
//         printf("10 X %d = %d\n",i,i*10);  // see the technicality
//     return 0 ; 
//     }