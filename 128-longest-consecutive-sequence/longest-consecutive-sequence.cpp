class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> st;
        int longest=1;
        for(auto it : nums){
            st.insert(it);
        }
        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int x = it;
                int c = 1;

                while(st.find(x+1) != st.end()){
                    x++;
                    c++;
                }            
                longest = max(longest,c);
            }
        }
        return longest;
    }
};