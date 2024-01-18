#include <stdio.h>
#include <math.h>
// void printarraya(int *ptr,int n){ 
//     *(ptr+2)=313234; // value will be changed in arr array ,as it was passed by reference
//     for (int i = 0; i <n; i++)
//     {
//         printf("the value of %d element is %d\n",i+1,*(ptr+i)); //ptr+0 , ptr+1 will show the address.
//     }

//     // ptr[2]=313234; // it will show the value . and alter the value of main function .s
// }
// void printarrayb(int ptr[],int n){
//     for (int i = 0; i<n; i++)
//     {
//         printf("the value of the %d element is %d\n",i+1,ptr[i]);
//     }

//     ptr[2]=90000; // This value will   be changes in arr array of main as well , by value

// }

int main()
{
    int arr[]={43,234,66,46,76,34,354};
    printarray(arr,7); 
    printf("the value of 3rd element is now :%d\n",arr[2]);
    // printf("%d\n",*arr[2]);
    
    return 0 ;
}