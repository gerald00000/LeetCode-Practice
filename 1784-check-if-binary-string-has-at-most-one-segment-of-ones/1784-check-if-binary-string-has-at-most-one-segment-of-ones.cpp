class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        bool check = false;
        for(int i =  1; i < n; i++){
            if(check){
                if(s[i] == '1') return false;
            }
            else if(s[i] == '0') check = true;
        }
        return true;
    }
};