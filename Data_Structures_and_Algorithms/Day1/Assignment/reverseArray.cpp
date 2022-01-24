#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){

    int a = n-1;
    int temp;
    for(int i=0;i<n/2;i++){
        temp = arr[a-i];
        arr[a-i] = arr[i];
        arr[i] = temp;
    }

}

int main(){
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}