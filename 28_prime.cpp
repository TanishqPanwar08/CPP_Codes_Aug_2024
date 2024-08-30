#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int sq = sqrt(n);
    for(int i=2; i<=sq; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<isPrime(n);
}