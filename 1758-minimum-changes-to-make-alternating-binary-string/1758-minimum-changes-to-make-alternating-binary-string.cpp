class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int ans1, ans2;
        if(s[0] == '0'){
            ans1 = 0;
            ans2 = 1;
        }
        if(s[0] == '1'){
            ans1 = 1;
            ans2 = 0;
        }
        char back1 = '0';
        char back2 = '1';

        for(int i = 1; i < n; i++){
            if(back1 == '0'){
                if(s[i] == '0'){
                    ans1++;
                }
                back1 = '1';
            }
            else if(back1 == '1'){
                if(s[i] == '1'){
                    ans1++;
                }
                back1 = '0';
            }
            if(back2 == '0'){
                if(s[i] == '0'){
                    ans2++;
                }
                back2 = '1';
            }
            else if(back2 == '1'){
                if(s[i] == '1'){
                    ans2++;
                }
                back2 = '0';
            }
        }

        return min(ans1, ans2);
    }
};