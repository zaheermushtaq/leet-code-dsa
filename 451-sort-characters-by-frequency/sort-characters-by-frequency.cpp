class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        map<char,int> freq;
        for(char c : s){
            freq[c]++;
        }
        vector<pair<char,int>> v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        for(auto &p : v){
            for(int i=0;i<p.second;i++){
                ans+=p.first;
            }
        }
        return ans;
    }
};