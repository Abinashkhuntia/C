//Create a two-dimensional vector using structures in c.
#include <stdio.h>
#include <math.h>
#include <string.h>
struct vector {
    int x ,y;
};
int main()
{
    struct vector v1;
    v1.x=v1.y=21;
    printf("x=%d,y=%d",v1.x,v1.y);
    return 0 ;
}