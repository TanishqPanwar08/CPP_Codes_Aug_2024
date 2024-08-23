#include<bits/stdc++.h>
using namespace std;

int MinSteps(int n, int m){
    return (n/m)+(n%m);
}

int main()
{
    cout<< MinSteps(10,3);
}