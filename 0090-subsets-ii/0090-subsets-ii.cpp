class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sol;
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, sol, res);

        return res;
    }

    void backtrack(vector<int>& nums, int start, vector<int>& sol,
                   vector<vector<int>>& res) {
        res.push_back(sol);

        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1])
                continue;
            sol.push_back(nums[i]);
            backtrack(nums, i + 1, sol, res);
            sol.pop_back();
        }
    }
};
