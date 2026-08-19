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
        vector<bool> dp(t + 1, false);
        dp[0] = true;  // sum = 0 is always possible
        
        for (int num : nums) {
            // update backwards to avoid reusing the same number twice
            for (int j = t; j >= num; j--) {
                if (dp[j - num]) dp[j] = true;
            }
        }
        
        return dp[t];
    }
};