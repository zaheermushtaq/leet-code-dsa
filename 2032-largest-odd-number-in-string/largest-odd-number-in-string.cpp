class Solution {
public:
    string largestOddNumber(string num){
        string a = "";
        int x;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]%2!=0){
                x=i;
                break;
            }
        }
        for(int i=0;i<=x;i++){
            a+=num[i];
        }
        return a;
    }
};