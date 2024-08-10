#include<bits/stdc++.h>
using namespace std;

int Nearest(int num, int m){
    int div=m/2;
    int temp = num%m;

    if(temp< div){
        return num-temp;
    }
    
    return num+(m - temp);
    
}

int main()
{
    cout<<Nearest(67,8)<<endl;
    cout<<Nearest(69,8)<<endl;
}