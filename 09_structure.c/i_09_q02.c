Write a function SumVector which returns the sum of two vectors passed to it.
The vectors must be two-dimensional
#include <stdio.h>
#include <math.h>
#include <string.h>
struct vector {
    int x ,y;
};
struct vector sumvector (struct vector v1,struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
int main()
{
    struct vector v1,v2,sum;
    v1.x=v1.y=1;
    v2.x=v2.y=2;
    sum=sumvector(v1,v2);
    printf("the sum of these vector is x  %d and y %d",sum.x,sum.y);
    return 0 ;
}
