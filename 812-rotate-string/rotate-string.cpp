class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal == s) return true;
        string x = s.substr(1)+s[0];
        if(goal == x) return true;
        for(int i=1;i<s.length();i++){
            x = x.substr(1)+s[i];
            if(goal == x) return true;
        }
        return false;
    }
};