class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        int m = mat.size();
        int n = mat[0].size();
        vector<int> row_count(m, 0);
        vector<int> col_count(n, 0);

        for(int row = 0; row < m; row++){
            for(int col = 0; col < n; col++){
                if(mat[row][col] == 1){
                    row_count[row]++;
                    col_count[col]++;
                }
            }
        }

        for(int row = 0; row < m; row++){
            for(int col = 0; col < n; col++){
                if(mat[row][col] == 1){
                    if(row_count[row] == 1 && col_count[col] == 1){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
