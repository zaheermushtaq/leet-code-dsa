class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums1 = nums;
        sort(nums1.begin(),nums1.end());
        vector<int> nums2(n);
        for(int x=1;x<=n;x++){
            for(int i=0;i<n;i++){
                nums2[i] = nums[(i+x)%n];
            }
            if(nums2 == nums1){
                return true;
                break;
            }
        }
        return false;
    }
};