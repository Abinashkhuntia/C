#include <stdio.h>
#include <math.h>
int main()
{
    int i=12;
    int *j=&i; /* declaration of the pointer --> (int *j) and 
                  it will store the address of (i) i.e. in --> &i , */
    int **k=&j;// this **k with strore the address of j.thst j is storing the add. of i 
    printf(" the value of i :%d\n",i);
    printf(" the value of i :%d\n",*j); // *j -> value at address(*) |
    printf(" the address of i :%u\n",&i); //%u is the specifier to represent the address
    printf(" the address of i :%d\n",j); // as j stores the value of i itself.
    printf(" the value of j :%d\n",&j);// its the value in j in a another variable
    printf(" the Value in address of j :%d\n",*(&j));//
    printf(" the  address of j :%u\n",&j);//Error the value and adress of j is same
    printf(" the value in  j :%d\n",**(&k));


    return 0 ;
}