#include<bits/stdc++.h>
using namespace std;

int Beautiful1(string str){
    int t1=0;
    int t2=0;

    for(int i=0; i<str.length(); i++)
    {
        if(i%2==0){
            if(str[i]=='1'){
                t1++;
            }
            else{
                t2++;
            }
        }
        else{
            if(str[i]=='0'){
                t1++;
            }
            else{
                t2++;
            }
        }
    }

    return min(t1,t2);
}

int main()
{
    string str1;
    cin>>str1;
    cout<<"Min no. to change the string to beautiful is: "<< Beautiful1(str1);
}