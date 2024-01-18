// #include<stdio.h>  
// int main(){    
//     int n,i,m=0,flag=0;    
//     printf("Enter the number to check prime:");    //n=86
//     scanf("%d",&n);    
//     m=n/2;    //m=86/2=43,m=43
//     for(i=2;i<=m;i++)    
//     {    
//         if(n%i==0){    
//         printf("Number is not prime\n");    
//         flag=1;    
//         break;}    
//     }    
//     if(flag==0)    
//     printf("Number is prime\n");     
//     return 0;  
//  }    


 //feeded no
#include <stdio.h>
#include <math.h>
int main()
{
    int n =2, prime=0;
    for(int i=2;i<45;i++)
    {
        if (n%i==0){
        prime = 1;}
        break;
    }

    if (prime==1){
    printf("This is a not prime number");}
    else{
    printf("This is a prime number");}
    return 0 ;
}