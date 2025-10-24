class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int x;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                x+=nums[i];
            }
            else{
                x-=nums[i];
            }
        }
        return x;
    }
};