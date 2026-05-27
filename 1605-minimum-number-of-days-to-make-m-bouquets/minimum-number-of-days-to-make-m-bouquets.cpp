class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(1LL*m*k > n) return -1;
        int day = *max_element(bloomDay.begin(),bloomDay.end());
        int low = 1;
        int high = day;
        while(low<high){
            int mid = (low+high)/2;
            int c = 0;
            int b = 0;
            for(int bloom : bloomDay){
                if(bloom <= mid){
                    c++;
                    if(c == k){
                        b++;
                        c = 0;
                    }
                }
                else{
                    c = 0;
                }
            }
            if(b >= m){
                high = mid;
            }
            else low=mid+1;
        }
        return high;
    }
};