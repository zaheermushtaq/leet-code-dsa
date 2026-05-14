class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> a = nums;
        int k=1;
        for(int i=1;i<n;i++){
            if(a[i] != nums[k-1]){
                nums[k]=a[i];
                k++;
            }
        }
        return k;
    }
};