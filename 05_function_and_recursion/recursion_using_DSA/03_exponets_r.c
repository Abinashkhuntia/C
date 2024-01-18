#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int power(int m,int n){
    if (n==0)  
        return 1;
    if(n%2==0)
        return power(m*m,n/2);
    else
        return m*power(m*m,(n-1)/2);    // time O(n/2)
}                                     //space O(n/2)
int main()
{
    printf("%d",power(2,4));
    return 0 ;
}



// int power(int m,int n){
//     if (n==0)  
//         return 1;
//     else
//         return power(m,(n-1))*m;    // time O(n)
// }                                     //space O(n)
// int main()
// {
//     printf("%d",power(2,3));
//     return 0 ;
// }
