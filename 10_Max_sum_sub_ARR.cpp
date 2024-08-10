#include<bits/stdc++.h>
using namespace std;

int maxSumOfSubArray(int arr[], int n)
{
    int cs=arr[0];
    int ms=arr[0];

    for(int i=1; i<n; i++){
        if(cs<0){
            cs=0;
        }
        cs += arr[i];
        
        ms = max(ms,cs);

        
    }
    return ms;
}

int main()
{
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSumOfSubArray(arr,9);
}