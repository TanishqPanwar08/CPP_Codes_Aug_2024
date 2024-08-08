// Rats
// Write a function that accepts three parameters: two positive integers r and unit, and a positive integer array arr of size n.
// Where r represents the number of rats present in an area. unit is the amount of food each rat consumes.
// Each element of the array arr represents the amount of food present in each house, where the index of the array corresponds to the house number.
// The function should determine the minimum number of houses required provide enough food for all the rats.

#include<bits/stdc++.h>
using namespace std;

int GetFood(int r, int unit, vector<int> arr){
    int total_food = r*unit;
    int count=0;
    sort(arr.begin(), arr.end());

    for(int i=arr.size()-1; i>=0; i--)
    {
        total_food -= arr[i];
        count++;
        if(total_food<0){
            break;
        }        
    }
    if(arr.size()==0)
    {
        return (-1);
    }
    else if(total_food>0){
        return 0;
    }
    return count;
    
}

int main()
{
    vector<int> arr={2,8,3,5,7,4,1,2};
    cout<<"Case 1: "<<endl;
    cout<<GetFood(5,4,arr)<<endl;

    cout<<"Case 2: "<<endl;
    cout<<GetFood(5,20,arr)<<endl;

    vector<int> arr2={};
    cout<<"Case 3: "<<endl;
    cout<<GetFood(5,20,arr2)<<endl;
}


