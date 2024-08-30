#include<bits/stdc++.h>
using namespace std;

void update(int **p2){
    //p2=p2+1;  //no change
    // *p2=*p2+1;  // change
    **p2=**p2+1;  // change
}

int main()
{
    // int i=5;
    // int *p1 = &i;
    // int **p2 = &p1;

    cout<<endl;
    // cout<< "Printing i    : "<<i<<endl;
    // cout<< "Printing *p1  : "<<*p1<<endl;
    // cout<< "Printing **p2 : "<<**p2<<endl;
    // cout<< "Printing &i   : "<<&i<<endl;
    // cout<< "Printing p1   : "<<p1<<endl;
    // cout<< "Printing *p2  : "<<*p2<<endl;
    // cout<< "Printing &p1  : "<<&p1<<endl;
    // cout<< "Printing p2   : "<<p2<<endl;
    // cout<< "Printing &p2  : "<<&p2<<endl;



    // cout<<"Before Update "<<endl;
    // cout<< "Printing i    : "<<i<<endl;
    // cout<< "Printing p1   : "<<p1<<endl;
    // cout<< "Printing p2   : "<<p2<<endl;

    // update(p2);
    // cout<<"After Update "<<endl;
    // cout<< "Printing i    : "<<i<<endl;
    // cout<< "Printing p1   : "<<p1<<endl;
    // cout<< "Printing p2   : "<<p2<<endl;

    float f = 12.5;
    float *p = &f;

    cout<<(*p)++;
    cout<<*p<<endl;


    cout<<endl;   
}