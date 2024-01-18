#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>


int sum_of_nos(int n){
    if (n==0)    
        return 0;
    else
        return sum_of_nos(n-1)+n;    // time O(n)
}                                     //space O(n)
int main()
{
    printf("%d",sum_of_nos(13));
    return 0 ;
}

// then loop is 2nd
int sum_of_nos(int n){
    int i ,sum=0;
    for( i=1;i<=n;i++){             //sapce O(1)=3
        sum=i+sum;                   //time O(n)
    }
    return sum;
}
int main()
{
    printf("%d",sum_of_nos(13));
    return 0 ;
}

//fastest on formula
int sum_of_nos(int n){
    return (n*(n+1))/2;     //time O(1) =3   operation
}                            //space O(1)
int main()
{
    printf("%d",sum_of_nos(13));
    return 0 ;
}