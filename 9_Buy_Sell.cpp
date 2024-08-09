#include<bits/stdc++.h>
using namespace std;

int Profit(int arr[], int n){
    int mini = INT16_MAX;
    int maxi = INT16_MIN;

    for(int i=0;i<n;i++){
        mini=min(arr[i],mini);
        maxi=max(maxi, arr[i]-mini);
    }
    return maxi;
}

int main()
{
    int arr[6]={7,1,6,5,3,4};
    cout<<Profit(arr,6);
}