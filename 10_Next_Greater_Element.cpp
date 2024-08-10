#include<bits/stdc++.h>
using namespace std;

vector<int> NextGreater(vector<int> arr, int n){
    vector<int> ans(n);   
    stack<int> s;
    if(n==0){
        ans.push_back(-1);
        return ans;    
    }

    ans[n-1]=-1;
    s.push(arr[n-1]);

    for(int i= n-2; i>=0 ;i--)
    {
        int cv = arr[i];
        if(cv<s.top()){
            ans[i]=s.top();
        }
        else{
            while(cv>=s.top() && s.size()>0){
                s.pop();
            }

            if(s.size()>0){
                ans[i]=s.top();
            }
            else{
                ans[i]=-1;
            }       
        }
        s.push(cv);
    }
    return ans;
}

int main()
{
    vector<int> arr ={4,5,2,25};
    vector<int> ans = NextGreater(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout<<ans[i]<<" ";
    }
}