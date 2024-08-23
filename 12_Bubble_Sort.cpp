#include <bits/stdc++.h> 

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n);

int main()
{
    vector<int> arr = {2,6,8,4,10};
    bubbleSort(arr, 6);

    for(int i = 0; i< 6; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 1; i<n; i++){
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j], arr[j+1]);
            }
        }
    }
    
}
