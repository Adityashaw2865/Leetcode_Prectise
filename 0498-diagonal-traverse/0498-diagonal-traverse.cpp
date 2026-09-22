class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<int> ans;

        for(int d = 0; d < n + m - 1; d++) {

            vector<int> temp;

            for(int i = 0; i < n; i++) {

                int j = d - i;

                if(j >= 0 && j < m) {
                    temp.push_back(mat[i][j]);
                }
            }

            // Alternate direction
            if(d % 2 == 0) {
                reverse(temp.begin(), temp.end());
            }

            for(int x : temp) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};