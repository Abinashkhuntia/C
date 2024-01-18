#include <stdio.h>
#include <math.h>
int main()
{
    // the value of incremented j and its address
    int i =12;
    int *j=&i;
    printf("the  addrees of j is %u\n",&j);
    ++j;
    printf("the  addrees of j is %u\n",&j);
    // printf("the value inside the new addrees j+1 is %d\n",*(&j));
    // printf(" now the  addrees of j+1 is %u\n",&j);
    return 0 ;
}


// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     //naive way to creat varialbes 
//     //int m1,m2,m3,m4;
//     //m1=62,m2=12,m3=52,m4=16;
//     int marks[4];
//     marks[0]=62;
//     marks[1]=12;
//     marks[2]=52;
//     marks[4]=16;
//     return 0 ;
// }


//input ,scan and print

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int m[3];
//     printf("enter your 1st num :");
//     scanf("%d",&m[0]);
//     printf("enter your 1st num :");
//     scanf("%d",&m[1]);
//     printf("enter your 1st num :");
//     scanf("%d",&m[2]);
//     printf("entered  nums are %d ,%d ,%d :", m[0],m[1],m[2]);
//     return 0 ;
// }