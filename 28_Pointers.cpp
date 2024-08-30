#include<bits/stdc++.h>
using namespace std;

void fun(int a[]) {
    cout << a[0] << " ";
}
int main()
{
    // int num =5;
    // int *ptr = &num;

    // cout<<num<<endl;
    // cout<<&num<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // cout<<"Size of integer: "<<sizeof(num)<<endl;
    // cout<<"Size of pointer: "<<sizeof(ptr)<<endl;

    // int *q = &num;
    // cout<<q<<endl;
    // cout<<&*q<<endl;

    // (*ptr)++;
    // // cout<< num << endl;

    // int *qtr = 0;
    // qtr = ptr;

    // int *xtr = ptr;

    // cout<<ptr<<" - "<< qtr <<" - "<<xtr <<endl;
    // cout<<*ptr<<" - "<< *qtr<< " - "<<*xtr << endl;

    // cout<< ptr<<endl;
    // ptr = ptr+1;
    // cout<< ptr<<endl;


    // int a[] = {1, 2, 3, 4};
    // cout << *(a) << " " << *(a+1);

    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout << *arr;
    // cout << *arr + 9;


int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }

     int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];

}