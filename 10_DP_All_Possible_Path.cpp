#include<bits/stdc++.h>
using namespace std;

int findPath(vector<vector<int>> grid){
    int n = grid.size();
    int m = grid[0].size();

    if(n==0||m==0){
        return 0;
    }
    
    vector<vector<int>> dp(n, vector<int>(m,0) );

    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=0; j--){
            if(grid[i][j]!=1){

                if(i+1<n && j+1<m){
                    dp[i][j]=dp[i+1][j]+dp[i][j+1];
                }
                else if(i+1<n && j+1==m){
                    dp[i][j]=dp[i+1][j];
                }
                else if(i+1==n && j+1<m){
                    dp[i][j]=dp[i][j+1];
                }
                else{
                    dp[i][j]=1;
                }

            }
        }
    }
    return dp[0][0];

}

int main()
{
    vector<vector<int>> grid ={{0,0,0},
                               {0,1,0},
                               {0,1,0}};
    cout<<findPath(grid);
}