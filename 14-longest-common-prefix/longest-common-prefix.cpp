class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a = "";
        int x=strs[0].length();
        int y=0;
        int z;
        for(int i=0;i<strs.size();i++){
            x = min(x,(int)strs[i].length());
        }
        if(strs.size()==1) a+=strs[0];
        for(int i=0;i<x;i++){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i] == strs[j+1][i]){
                    y=1;
                    z=j;
                }else{
                    y=0;
                    break;
                }
            }
            if(y==1) a+=strs[z][i];
            else break;
        }
        return a;
    }
};