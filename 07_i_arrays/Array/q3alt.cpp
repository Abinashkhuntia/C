// Program to calculate standard deviation of an array

#include <bits/stdc++.h>
using namespace std; 

float sd(float arr[]){
    float sum =0.0, mean , standarddeviation=0.0;
    int i;
    for (i=0; i<10; i++){
        sum = sum + arr[i];
    }
    mean = sum/10;
    for (i=0; i<10; i++){
        standarddeviation = standarddeviation + pow((arr[i] - mean),2);   //Standard deviation formula : sqrt(sum of (x-mean)^2)/n
    }
    return sqrt(standarddeviation/10);
}

int main(){
    float arr[100];
    int i;
    for (i=0; i<10; i++){
        cin >> arr[i];
    }
    cout << sd(arr);
    return 0;
}