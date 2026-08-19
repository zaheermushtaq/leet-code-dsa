class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int t=0;
        for(int i=0;i<n;i++){
            t+=nums[i];
        }
        if(t%2!=0) return false;
        else t=t/2;
        vector<vector<bool>> dp(n,vector<bool> (t+1,0));
        for(int i=0;i<n;i++) dp[i][0]=true;
        if(nums[0]<=t) dp[0][nums[0]]=true;
        for(int i=1;i<n;i++){
            for(int j=1;j<=t;j++){
                bool x=dp[i-1][j];
                bool y=false;
                if(j>=nums[i]) y=dp[i-1][j-nums[i]];
                dp[i][j] = x|y;
            }
        }
        return dp[n-1][t];
    }
};