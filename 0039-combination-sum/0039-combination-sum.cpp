
class Solution {
public:
    void solve(vector<int>& arr, int target, int i,
               vector<int>& comb, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(comb);
            return;
        }

        if (i == arr.size() || target < 0) {
            return;
        }

        // Choose current element
        comb.push_back(arr[i]);
        solve(arr, target - arr[i], i, comb, ans);

        // Backtrack
        comb.pop_back();

        // Skip current element
        solve(arr, target, i + 1, comb, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> comb;

        solve(arr, target, 0, comb, ans);

        return ans;
    }
};
