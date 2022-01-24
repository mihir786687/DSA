#include<bits/stdc++.h>
using namespace std;

// Code for finding maximum and minimum element

int main(){
    cout<<"Enter the number of element\n";
    int n;
    cin>>n;
    int arr[n];
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<minimum){
            minimum = arr[i];
        }
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    cout<<"The maximum element in the array is "<<maximum<<"\n";
    cout<<"The minimum element in the array is "<<minimum<<"\n";
}