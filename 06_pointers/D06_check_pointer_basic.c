// %u and the %d works same being a different specifier ?

#include <stdio.h>
#include <math.h>
int main()
{
    int i=12 ;
    // int n;
    // printf("enter any integer :");
    // scanf("%d",&n);
    int *j =&i; /* declaration of the pointer --> (int *j) and 
                  it will store the address of (i) i.e. in --> &i , */
    int **k=&j;// this **k with strore the address of j.thst j is storing the add. of i 
    printf("1 the value of i :%d\n",i);
    printf("2 the value of i at pointer j:%d\n\n",*j); // *j -> value at address(*) |

    printf("3 the address of i (&i) :%u\n",&i); //%u is the specifier to present the address
    printf("4 the address of i (i.e the value of j) :%d\n",j); // a s j stores the value of i itself.
    printf("5 the address of i  :%u\n\n",j);

    printf("6 the  address of j :%u\n",&j);//
    printf("7 the value of j i.e the address of i :%u\n",*(&j));// same as ans 3
    printf("8 the value in  j through the pointer k:%d\n",**(&k));

    return 0 ;
}