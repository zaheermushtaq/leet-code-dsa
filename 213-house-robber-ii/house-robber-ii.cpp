class Solution {
public:
    int solve(vector<int>& nums,int x,int y){
        int prev1=0;int prev2=0;
        for(int i=x;i<=y;i++){
            int c = max(prev2+nums[i],prev1);
            prev2=prev1;
            prev1=c;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        return max(solve(nums,0,n-2),solve(nums,1,n-1));
    }
};