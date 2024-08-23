#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
	int days =1, time_required=0;
	for(int i=0; i<n; i++){
		if((time_required + arr[i]) <= mid){
			time_required += arr[i];
		}
		else
		{
			days++;
			if(days > n || arr[i]>mid){
				return false;
			}
			time_required = arr[i];
		}
	}
	return true;
}

long long int ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	 
	 int s=0;
	 int sum=0;
	 for(int i=0; i<n; i++){
		 sum +=time[i];
	 }
	 int e=sum;
	 int ans=-1;
	 int mid = s+(e-s)/2;

	 while(s<=e){
		 if(isPossible(time, n, m, mid)){
			 ans=mid;
			 e=mid-1;
		 }
		 else{
			 s=mid+1;
		 }
		 mid = s+(e-s)/2;
	 }
	 return ans;

} 



int main()
{
    vector<int> time = {1, 2, 2, 3, 1};
    cout << ayushGivesNinjatest(3, 5, time);

}