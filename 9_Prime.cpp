#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the No. to Check: ";
    cin>>n;
    cout<<IsPrime(n);
}

