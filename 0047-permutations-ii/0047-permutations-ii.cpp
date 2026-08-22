class Solution {
public:
    void getPerms(vector<int>& nums, int index, set<vector<int>>& ans) {
        int n = nums.size();
        if (index == n) {
            ans.insert(nums);
            return;
        }
        for (int i = index; i < n; i++) {
            swap(nums[index],nums[i]);
            getPerms(nums, index + 1, ans);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        getPerms(nums, 0, ans);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};