#include <bits/stdc++.h>
using namespace std;

int Path(vector<vector<int>> grid)
{
    int n = grid.size();
    int m = grid[0].size();

    if (m == 0 || n == 0)
    {
        return 0;
    }

    vector<vector<int>> dp(n, vector<int>(m, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if(grid[i][j]!=1){
                if(i+1<n && j+1<m){
                    dp[i][j] = dp[i+1][j] + dp[i][j+1];
                }
                else if(j+1<m && i+1==n){
                    dp[i][j]= dp[i][j+1];
                }
                else if(i+1<n && j+1==m){
                    dp[i][j]= dp[i+1][j];
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
                               {0,0,0}};
    cout<<Path(grid);
}