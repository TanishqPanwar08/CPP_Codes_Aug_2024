#include<bits/stdc++.h>
using namespace std;

bool IsPailendrome(string str){

    int s=0;
    int e=str.length()-1;
    int count=0;
    while(s<=e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
    }

    
    return true;

}

int main()
{
    string str;
    cin>>str;
    cout<<"The Given string is Pailendrome : " << IsPailendrome(str);

    return 0;
}

