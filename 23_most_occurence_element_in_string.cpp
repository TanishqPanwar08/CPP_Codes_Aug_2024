#include<bits/stdc++.h>
using namespace std;

char getMax(string s){
    vector<int> arr(26,0);
    int ans=0;
    int maxi=-1;
    

    for(int i=0; i<s.length(); i++){
        int number=0;
        if('a'<=s[i] && s[i]<='z'){
            number = s[i]-'a';
        }
        else{
            number = s[i]-'A';
        }

        arr[number]++;
    }

    for(int i=0; i<26; i++){
        if(arr[i]>maxi){
            ans = i;
            maxi = arr[i];
        }
    }

    char final = 'a'+ans;
    return final;
    
}

int main()
{
    string s;
    cin>>s;
    cout<<getMax(s);
}