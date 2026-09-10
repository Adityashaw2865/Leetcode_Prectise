class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int ans = -1;
        sort(nums.begin(), nums.end());
        while (i <= j) {
            if (nums[i] + nums[j] == 0) {
                ans = max(ans, nums[j]);
                i++;
                j--;
            } else if (nums[i] + nums[j] > 0) {
                j--;
            } else
                i++;
        }
        return ans;
    }
};