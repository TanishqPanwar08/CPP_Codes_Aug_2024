#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
    if(year%4==0 && year%100==0 || year%400){
        return true;
    }
    else return false;
}

int main()
{
    cout<<isLeapYear(2004); // leap year
    cout<<isLeapYear(1900); //not a leap year


}