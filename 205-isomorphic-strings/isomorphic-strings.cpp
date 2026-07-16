class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> a;
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(a.find(c)!=a.end()){
                if(a[c]!=t[i]) return false;
            }else{
                a[c]=t[i];
            }
        }
        unordered_map<char,char> b;
        for(int i=0;i<t.length();i++){
            char c = t[i];
            if(b.find(c)!=b.end()){
                if(b[c]!=s[i]) return false;
            }else{
                b[c]=s[i];
            }
        }
        return true;
    }
};