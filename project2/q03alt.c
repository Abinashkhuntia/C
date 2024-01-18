// C program to demonstrate Basic Euclidean Algorithm
#include <stdio.h>

// Function to return gcd of a and b 
int gcd(int a, int b)            // Recursive Function
{
	if (a == 0)                  // If a==0 , then gcd(a,b) = b
		return b;        
	return gcd(b%a, a);           
}

// Driver program to test above function
int main()
{
	int a = 70, b = 50;
	printf("GCD(%d, %d) = %dn", a, b, gcd(a, b));
	a = 35, b = 10;
	printf("GCD(%d, %d) = %dn", a, b, gcd(a, b));
	a = 31, b = 2;
	printf("GCD(%d, %d) = %dn", a, b, gcd(a, b));
	return 0;
}
// //https://webwhiteboard.com/board/VpDwtG9mdj0yLXJ32gRxwHp9Jo0gCUOR/

// /*a=50 , b=70

// a!= 0 -> gcd ( 20 , 50 ) -> a = 20 , b=50
// a!= 0 -> gcd( 10 , 20) -> a=10 b = 20
// a! = 0 -> gcd ( 0, 10) -> a=0 b=10
// a=0 ->  return b -> return 10 (ans)

// /*a=70 , b=50

// a!= 0 -> gcd ( 20 , 50 ) -> a = 20 , b=50
// a!= 0 -> gcd( 10 , 20) -> a=10 b = 20
// a! = 0 -> gcd ( 0, 10) -> a=0 b=10
// a=0 ->  return b -> return 10 (ans)