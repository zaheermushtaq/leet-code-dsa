class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans;
        int maxi=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>0){
                maxi = max(maxi,sum);
            }
            else{
                maxi = max(maxi,sum);
                sum=0;
            }
        }
        return maxi;
    }
};