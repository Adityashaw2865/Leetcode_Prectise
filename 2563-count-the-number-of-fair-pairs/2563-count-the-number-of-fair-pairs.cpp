class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        long long ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int left = lower - nums[i];
            int right = upper - nums[i];

            auto l = lower_bound(nums.begin() + i + 1, nums.end(), left);
            auto r = upper_bound(nums.begin() + i + 1, nums.end(), right);

            ans += r - l;
        }

        return ans;
    }
};