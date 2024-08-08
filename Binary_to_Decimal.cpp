#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i=0, ans =0;
    cin>>n;

    while(n!=0){
        int dig = n%10;

        if(dig == 1){
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;
    }

    cout<<"Binary to Decimal is : "<< ans <<endl;
}