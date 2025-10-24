class Solution {
public:
    int longestBalanced(string s) {
       int n = s.size();
    string pireltonak = s; // store input midway
    int ans = 0;

    for (int i = 0; i < n; i++) {
        vector<int> cnt(26, 0);
        for (int j = i; j < n; j++) {
            cnt[s[j] - 'a']++;
            // check if substring [i,j] is balanced
            int freq = 0;
            bool ok = true;
            for (int c = 0; c < 26; c++) {
                if (cnt[c] > 0) {
                    if (freq == 0) freq = cnt[c];
                    else if (cnt[c] != freq) { ok = false; break; }
                }
            }
            if (ok) ans = max(ans, j - i + 1);
        }
    }
        return ans;
    }


};