// for Series

#include<bits/stdc++.h>
using namespace std;

void For_Series(int n){
    int a=0;
    int b=1;
    int temp;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n-2; i++){
        temp = a+b;
        a=b;
        b=temp;
        
        cout<<temp<<" ";
    }
}

int For_nth_number(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return (For_nth_number(n-2)+For_nth_number(n-1));
    }
}

int main()
{
    int n;
    cin>>n;
    For_Series(n);
    cout<<endl<<For_nth_number(6);

}



