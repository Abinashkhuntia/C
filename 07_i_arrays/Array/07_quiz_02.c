/*Addition of a number to a pointer.
  Subtraction of a number from a pointer
  Subtraction of one pointer from another
  Comparison of two pointer variables 

q) Try these operations on another variable by creating pointers in a separate program.
 Demonstrate all four operations */
 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include<stdlib.h>
 int main()
 {
  int *ptr , *ptr2 ;
  int x[]={12,34,235,23,5,23};
  int []={12,34,235,23,5,23};
  ptr=x;
  printf("Addition of a number to a pointer %d \n", *(ptr+3));
  printf("subtraction  of a number to a pointer %d ", *(ptr-1));
  printf("subtraction  of a pointer to a another %d ", *(ptr-1));
  
  return 0 ;
 }