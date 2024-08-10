#include<bits/stdc++.h>
using namespace std;

void ZeroesToEnd(int arr[], int n){
    int i=0;
    int j=0;

    while(i<n)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }

        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

int main()
{
    int arr[8]={1,2,0,4,3,0,5,5};
    ZeroesToEnd(arr, 8);
}
