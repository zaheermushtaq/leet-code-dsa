class Solution {
public:
    int ladderLength(string bw, string ew, vector<string>& w) {
        unordered_set<string> st(w.begin(),w.end());
        if(st.find(ew)==st.end()) return 0;
        //int n = bw.length();
        queue<pair<string,int>> q;
        q.push({bw,1});
        while(!q.empty()){
            auto [x,c] = q.front();
            q.pop();
            for(int i=0;i<x.size();i++){
                char y=x[i];
                for(char ch='a';ch<='z';ch++){
                    x[i]=ch;
                    if(x==ew) return ++c;
                    if(st.find(x)!=st.end()){
                        q.push({x,c+1});
                        st.erase(x);
                    }
                }
                x[i]=y;
            }
        }
        return 0;
    }
};