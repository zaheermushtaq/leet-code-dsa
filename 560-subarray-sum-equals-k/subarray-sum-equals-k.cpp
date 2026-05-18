class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ps = 0;
        int ans = 0;
        unordered_map<int,int> pscount;
        pscount[0] = 1;
        for(int i=0;i<n;i++){
            ps+=nums[i];
            int remaining = ps-k;
            if(pscount.find(remaining) != pscount.end()){
                ans+=pscount[remaining];
            }
            pscount[ps]++;
        }
        return ans;
    }
};