// Sum of sqrt of even numbers - Sum of sqrt of Odd numbers in a range [m,n]
#include<bits/stdc++.h>
using namespace std;

double answer(int m, int n)
{
    double sum_Eve=0, sum_Odd=0;
    for(int i=m; i<=n; i++){
        if(i%2==0){
            sum_Eve += sqrt(i);
        }
        else{
            sum_Odd += sqrt(i);
        }
    }
    return(sum_Eve-sum_Odd);
}

int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    cout<<answer(m,n);

}