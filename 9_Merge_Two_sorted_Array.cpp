#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int m, int arr2[], int n){
    int i=0,j=0,k=0;
    int arr[m+n];

    while(i<m && j<n){
        if(arr1[i]>arr2[j]){
            arr[k++]=arr2[j++];
        }
        else
        {
            arr[k++]=arr1[i++];
        }
    }

    while(i<m){
        arr[k++]=arr1[i++];
    }

    while(j<n){
        arr[k++]=arr2[j++];
    }

    for(int i=0; i<+m+n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr1[4] = {1,3,4,5};
    int arr2[5] = {1,1,2,4,6};
    merge(arr1, 4, arr2, 5);
}