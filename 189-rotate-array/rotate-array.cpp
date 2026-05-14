class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> r(n);
        for(int i=0;i<n;i++){
            r[(i+k)%n]=nums[i];
        }
        nums = r;
    }
};