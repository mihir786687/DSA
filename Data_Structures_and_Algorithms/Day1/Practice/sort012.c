//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int arr[3] = {0};
    for(int i=0;i<n;i++){
        arr[a[i]%3]++;
    }
    int j=0;
    for(int i=0;i<3;i++){
        while(arr[i]>0){
            a[j]=i;
            arr[i]--;
            j++;
        }
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends

  //GFG = https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1