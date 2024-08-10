#include<bits/stdc++.h>
using namespace std;

bool IsUnique(vector<int> arr){
    sort(arr.begin(), arr.end());
    vector<int> ans; 
    int count =1;


    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            ans.push_back(count);
            count =1;
        }
    }
    ans.push_back(count);

    sort(ans.begin(), ans.end());

    for(int i=1; i<ans.size(); i++){
        if(ans[i]==ans[i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1,2,3,2,3,3};
    vector<int> arr2 = {1,2,3,2,3,3,4};

    cout<<"Case1 : "<< IsUnique(arr)<<endl;
    cout<<"Case2 : "<< IsUnique(arr2)<<endl;

}