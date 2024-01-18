#include <bits/stdc++.h>
using namespace std; 

int factorial(int n){
    if (n>1)
        return n*factorial(n-1);
    else
        return 1 ;
}


int main(){
    int n;
    printf(" Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,factorial(n));
}


/*
Explanation:
if n = 4
then
    factorial(4) = 4*factorial(3)
    factorial(3) = 3*factorial(2)
    factorial(2) = 2*factorial(1)
    factorial(1) = 1
*/

#include <stdio.h>
void insertionSortRecursive(int arr[], int n)
{
 
    if (n <= 1)
        return;
    insertionSortRecursive(arr, n - 1);
 

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSortRecursive(arr, n);
    printArray(arr, n);
 
    return 0;
}
 