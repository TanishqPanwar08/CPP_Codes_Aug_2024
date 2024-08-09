#include<bits/stdc++.h>
using namespace std;

bool IsPalindrome(string s){
    int start=0;
    int end=s.length()-1;

    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string s = "aabbacabbaa";
    cout<<"Case 1: "<<IsPalindrome(s)<<endl;
    string s2 = "aabbaccabbaa";
    cout<<"Case 2: "<<IsPalindrome(s2)<<endl;
    string s3 = "aabbacabaa";
    cout<<"Case 3: "<<IsPalindrome(s3)<<endl;
}