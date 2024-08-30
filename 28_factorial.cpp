#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }

    int multi = 1;

    multi = n * fact(n-1);
    return multi;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}