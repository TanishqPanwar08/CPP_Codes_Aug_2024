#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int size){
    int i=0,j=0;
    if(arr[0]>=0){
        while(i<size && j<size){
            if(i%2==1 && arr[i]>0 && j%2==0 && arr[j]<0){
                swap(arr[i],arr[j]);
                i++; 
                j++;
            }

            while(i<size){
                if(i%2==1 && arr[i]>0){
                    break;
                }
                i++;
            }

            while(j<size){
                if(j%2==0 && arr[j]<0){
                    break;
                }
                j++;
            }

        }
    }
    else{
        while(i<size && j<size){
            if(i%2==1 && arr[i]<0 && j%2==0 && arr[j]>0){
                swap(arr[i],arr[j]);
                i++; 
                j++;
            }

            while(i<size){
                if(i%2==1 && arr[i]<0){
                    break;
                }
                i++;
            }

            while(j<size){
                if(j%2==0 && arr[j]>0){
                    break;
                }
                j++;
            }

        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[6]={3,1,-2,-5,2,-4};
    int b[6]={-3,-4,5,6,3,-2};

    rearrange(a,6);
    rearrange(b,6);


}