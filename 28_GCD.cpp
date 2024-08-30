#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==0)
    return a;

    if(b==0)
    return b;

    while(a!=b){
        if(a<b){
            b=b-a;
        }
        else{
            a=a-b;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout<<"Enter the two no: ";
    cin>>a>>b;

    cout<<"GCD of these two no is: "<<gcd(a,b);
}