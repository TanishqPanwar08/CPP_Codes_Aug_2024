// Q. Bulbs

// N Light bulbs are connected by a wire. Each bulb has a switch associated with it, however due to faulty wiring, a switch also changes the state of all the bulbs to the right of current bulb.
// Given an initial state of all bulbs, Find the minimum number of switches you have to press to turn on all the bulbs. You can press the same switch multiple times.
// Note: O represents the bulb is off and 1 represents the bulb is on.
// Examples:
// Input: A[] = [0101]
// Output: 4

#include<bits/stdc++.h>
using namespace std;

int Press(int arr[], int size)
{
    int count=0;
    for(int i=0;i<size; i++){
        if(arr[i]==0){
            arr[i]=1;
            for(int j=i+1;j<size;j++){
                if(arr[j]==1){
                    arr[j]=0;
                }
                else{
                    arr[j]=1;
                }
            }
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[6]={1,0,0, 1, 1, 0};
    cout<<Press(arr,6);
}
