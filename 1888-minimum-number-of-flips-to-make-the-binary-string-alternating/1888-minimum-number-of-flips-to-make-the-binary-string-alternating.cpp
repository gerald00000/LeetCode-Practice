class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s += s;
        int res = n;
        int cnt = 0;
        string target;
        target.reserve(2 * n);
        for (int i = 0; i < n; i++) {
            target += "01"; 
        }

        for(int i = 0; i < 2 * n; i++) {
            if(s[i] != target[i]) {
                cnt++;
            }

            if(i >= n) {
                if(s[i - n] != target[i - n]){
                    cnt--;
                }
            }

            if(i >= n - 1) {
                res = min({res, cnt, n - cnt});
            }
        }

        return res;
    }
};