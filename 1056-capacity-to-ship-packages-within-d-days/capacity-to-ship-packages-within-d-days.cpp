class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        for(int w : weights){
            high+=w;
        }
        while(low<high){
            int mid = (low+high)/2;
            int x = 0;
            int a=0;
            for(int i=0;i<n-1;i++){
                x+=weights[i];
                if(x+weights[i+1]>mid){
                    x=0;
                    a++;
                }
            }
            a++;
            if(a<=days) high=mid;
            else low=mid+1;
        }
        return low;
    }
};