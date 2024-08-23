#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n);

int main()
{
    vector<int> arr = {2,6,8,4,10};
    insertionSort(arr, 6);

    for(int i = 0; i< 6; i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(vector<int> &arr, int n){
    // Write your code here.

    for(int i = 1; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
}