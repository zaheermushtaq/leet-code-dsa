class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        int sum=0;
        for (auto it : freq){
            if(it.second%k==0){
                sum+=it.first*it.second;
            }
        }
        return sum;
    }
};