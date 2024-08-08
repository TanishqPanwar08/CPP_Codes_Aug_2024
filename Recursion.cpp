#include<bits/stdc++.h>
using namespace std;
 
void fun(int k){
    if(k>155)
    {
        return;
    }
    
    else
    {
        cout<<k<<endl;
        fun(k+2);
        cout<<k<<endl;
    }
    

}

int main()
{
    cout<<1%5<<endl;
    cout<<5%1<<endl;
}