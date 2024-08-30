#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*
    int arr[10]={1 ,12, 43, 47, 85, 96};
    cout<<"First address of the array: "<<arr<<endl;
    cout<<"First address of the array: "<<&arr[0]<<endl;

    cout<<*arr<<endl;
    cout<<*arr + 1<<endl;
    cout<<*(arr+1)<<endl<<endl;

    cout<<arr[3]<<endl;
    cout<<*(arr+3)<<endl<<endl;

    int i=4;
    cout<<arr[i]<<endl;
    cout<<i[arr]<<endl<<endl;

    cout<<sizeof (arr)<<endl;
    int *p=&arr[0];
    cout<<sizeof (p)<<endl;
    cout<<sizeof (*p)<<endl;
    cout<<sizeof (&p)<<endl;
    */


   int a[20]={11,22,33,55,56,77,555,46,88};
   cout<<&a<<endl;
   cout<<&a[0]<<endl;
   cout<<a<<endl<<endl;

   int *p = &a[0];

   cout<<&p<<endl;
   cout<<*p<<endl;
   cout<<p<<endl;

}