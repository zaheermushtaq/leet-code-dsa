class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int a = floor(n/3);
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto &[x,y] : freq){
            if(y>a) ans.push_back(x);
        }
        return ans;
    }
};