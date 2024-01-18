#include <stdio.h>
#include <math.h>

float convert_to_fehanite(float c){
    return  ((9*c)/5)+32 ;
}
int main()
{
    float c;
    printf("enter tem in celsious:\n");
    scanf("%f",&c);
    printf("tem is :%.2f\n",convert_to_fehanite(c));
    return 0 ;
}