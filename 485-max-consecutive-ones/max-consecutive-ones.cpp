class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int x=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                x++;
                maxi=max(maxi,x);
            }
            else{
                x = 0;
            }
        }
        return maxi;
    }
};