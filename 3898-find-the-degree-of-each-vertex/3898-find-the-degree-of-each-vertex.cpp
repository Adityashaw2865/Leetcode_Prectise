class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        for (auto row : matrix) {
            int count = 0;
            for (auto x : row) {
                if (x == 1) {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};