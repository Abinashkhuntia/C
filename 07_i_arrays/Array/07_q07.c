// //Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int multtable[3][10];
//     for (int i = 0; i < 10; i++)
//     {
//         multtable[0][i]=2*(i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {

//         printf("2 x %d = %d\n",i+1,multtable[0][i]);
//     }
//     printf("*****************************************************\n");
//     for (int i = 0; i < 10; i++)
//     {
//         multtable[1][i]=7*(i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {

//         printf("7 x %d = %d\n",i+1,multtable[1][i]);
//     }
//     printf("*****************************************************\n");
//     for (int i = 0; i < 10; i++)
//     {
//         multtable[2][i]=9*(i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {

//         printf("9 x %d = %d\n",i+1,multtable[2][i]);
//     }
    
//     return 0;
// }

//
#include<stdio.h>
void printTable (int *mulTable, int num, int n){
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }
    for (int i=0; i<n; i++){
        printf("%dX%d = %d\n", num, i+1, mulTable[i]);
    }
printf("**********************************************\n\n");
}
int main() {
int mulTable [3] [10];
printTable (mulTable [0], 2, 10);
printTable (mulTable[1], 7, 10);
printTable (mulTable [2], 9, 10);
return 0;
}