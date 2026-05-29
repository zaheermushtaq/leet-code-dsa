class Solution {
public:
    string removeOuterParentheses(string s) {
        int x = 0;
        string a;
        for(char c : s){
            if(c == '('){
                x++;
                if(x!=1) a.push_back('(');
            }
            else{
                x--;
                if(x!=0) a.push_back(')');
            }
        }
        return a;
    }
};