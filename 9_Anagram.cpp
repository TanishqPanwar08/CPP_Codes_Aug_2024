#include<bits/stdc++.h>
using namespace std;

bool IsAnagram(string s, string t){
    if(s.length()!=t.length()){
        return false;
    }

    int *map = new int[26]{0};
    for(int i=0; i<s.length(); i++){
        map[s[i]-'a']++;
        map[t[i]-'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if(map[i]!=0){
            return false;
        }
    }
    delete[] map;
    return true;
}


int main()
{
    string s = "tanishq";
    string t = "tqainsh";
    cout<<"case 1: "<<endl;
    cout<<IsAnagram(s,t)<<endl;

    string q = "tqains";
    cout<<"case 2: "<<endl;
    cout<<IsAnagram(s,q)<<endl;

    string z = "tqawwwh";
    cout<<"case 3: "<<endl;
    cout<<IsAnagram(s,z)<<endl;
}