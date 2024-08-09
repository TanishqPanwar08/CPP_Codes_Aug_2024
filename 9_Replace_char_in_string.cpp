#include<bits/stdc++.h>
using namespace std;

string Replace(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]== 'a'){
            s[i]='b';
        }
        else if(s[i]=='b'){
            s[i]='a';
        }
    }
    return s;
}

int main()
{
    string s ="aabbabcaccab";
    cout<<Replace(s);
}   