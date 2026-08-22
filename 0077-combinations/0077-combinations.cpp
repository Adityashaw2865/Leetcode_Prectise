class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(int start, int n, int k, vector<int>& temp) {
        // k numbers choose ho gaye
        if (temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        // remaining numbers me se choose karo
        for (int i = start; i <= n; i++) {
            temp.push_back(i);          // choose

            solve(i + 1, n, k, temp);   // next number

            temp.pop_back();            // undo / backtrack
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        solve(1, n, k, temp);
        return ans;
    }
};