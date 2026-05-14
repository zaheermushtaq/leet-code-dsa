class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        vector<int> f;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }
            else{
                f.push_back(nums[i]);
            }
        }
        for(int i=0;i<c;i++){
            f.push_back(0);
        }
        nums = f;
    }
};