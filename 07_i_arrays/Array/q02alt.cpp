//2) Write a Program that takes n element from user and displays the largest element of an array.

#include <bits/stdc++.h>
using namespace std; 


int main(){
    int i,n;
    float arr[100];
    cout<<"Enter the no. of elements : ";
    cin>>n;
    for (i=0; i<n; i++)
    {
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    for (i=1; i<n; i++){
        if (arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    cout<<"Largest element is : "<<arr[0];

    return 0;
}


// Output :
// { 5,6,4,8 ,6,7}