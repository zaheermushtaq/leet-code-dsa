class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        if(o[0][0]==1) return 0;
        int m = o.size();
        int n = o[0].size();
        vector<vector<int>> dp(m,vector<int> (n,1));
        for(int i=1;i<m;i++){
            if(o[i][0]==0) dp[i][0]=dp[i-1][0];
            else dp[i][0]=0;
        }
        for(int i=1;i<n;i++){
            if(o[0][i]==0) dp[0][i]=dp[0][i-1];
            else dp[0][i]=0;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(o[i][j]==0) dp[i][j]=dp[i-1][j]+dp[i][j-1];
                else dp[i][j]=0;
            }
        }
        return dp[m-1][n-1];
    }
};