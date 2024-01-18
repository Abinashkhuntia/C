//full_pyramid
#include <stdio.h>
int main() {
   int i, j , k = 0;
   
   for (i = 1; i <= 4; ++i, k = 0) {  
      // printf("%d",i);//  i=1                      // i=1 for line 1 , i=1 for loop2 as ++i then 
      for (j = 1; j <= 4 - i; ++j) {      
         printf("%d",i); // i=1                       // j=1 ,j<=4-i ,  "  ","  ","  "
         printf("  ");                             //
      }
      // while (k != 2 * i - 1) {                     // contidtin for line 1 --> k!= (2*i)-1 =1 ,  
      //    printf("* ");                             // k=0  --> '* '\n 
      //    ++k;                                      
      // }
      printf("\n");
   }
   return 0;
}
//       * 
//     * * *
//   * * * * *
// * * * * * * *