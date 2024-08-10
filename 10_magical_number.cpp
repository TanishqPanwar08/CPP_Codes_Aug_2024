#include<bits/stdc++.h>
using namespace std;

int MagicalNumber(int n)
{
    int count=0;

    for (int i = 1; i <= n; i++)
    {
        int x=i;
        int sum=0;
        while(x!=0)
        {
            if((x&1)==0){
                sum+=1;
            }
            else{
                sum+=2;
            }

            x=x>>1;
        }
        if(sum%2!=0){
            count++;
        }
    }

    return count;
    
}

int main()
{
    int n;
    cout<<"Enter the Value: ";
    cin>>n;
    cout<<MagicalNumber(n);
}