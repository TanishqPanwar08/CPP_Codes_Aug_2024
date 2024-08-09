#include<bits/stdc++.h>
using namespace std;

int Missing(int arr[], int size){
    int sum = (size*(size+1))/2;
    int ans =0;

    for (int i = 0; i < size; i++)
    {
        ans += arr[i];
    }

    ans=sum-ans;
    return ans;
    
}

int main()
{
    int arr[5]={1,3,4,5,0};
    cout<<Missing(arr,5);
}