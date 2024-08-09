#include<bits/stdc++.h>
using namespace std;

bool IsPresent(vector<vector<int>> arr, int k){
    int row = arr.size();
    int col = arr[0].size();

    int s = 0;
    int e = (row*col)-1;

    int m = s+ (e-s)/2;

    while(s<=e){
        if(arr[m/col][m%col]==k){
            return true;
        }
        else if(arr[m/col][m%col]>k){
            e = m-1;
        }
        else {
            s = m+1;
        }
        m = s+ (e-s)/2;
    }
    return false;
}

int main()
{
    vector<vector<int>> arr ={{1,2,3},{4,5,3},{7,8,9}};
    cout<<IsPresent(arr, 4);
}