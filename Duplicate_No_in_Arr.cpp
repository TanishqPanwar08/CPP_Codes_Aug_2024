// Given an array of size n containing eachno between 1 and N-1 at least once. There is a single integer value that is present in the array twice.
// Find That Duplicate integer
// 1, 2, 3, ......, X, ..... N, X

/* #include<bits/stdc++.h>
using namespace std;
 
void duplicate(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++)
    {
        ans = arr[i]^ans;
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
    }
    
    cout<<"Duplicate Value is : "<<ans<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    duplicate(arr,n);    
}
*/



// Array range [1, n] each integer appears once or twice, return an array of the integers that appears twice

#include<bits/stdc++.h>
using namespace std;
 
void ALL_duplicate(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++)
    {
        ans = arr[i]^ans;
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
    }
    
    cout<<"Duplicate Value is : "<<ans<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    ALL_duplicate(arr,n);    
}
