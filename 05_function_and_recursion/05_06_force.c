#include <stdio.h>
#include <math.h>
float force(float m){
    return m*9.8;
}
int main()
{
    float m;
    printf("enter mass:");
    scanf("%f",&m);
    printf("force is: %.2f\n",force(m));
    return 0 ;
}