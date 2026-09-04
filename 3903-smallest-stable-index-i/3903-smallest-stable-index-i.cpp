class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int maxi = nums[0];
            int mini = nums[i];

            // Maximum from 0 to i 1st one 
            for (int j = 0; j <= i; j++) {
                maxi = max(maxi, nums[j]);
            }

            // Minimum from i to n-1 2nd loop 
            for (int j = i; j < n; j++) {
                mini = min(mini, nums[j]);
            }

            if (maxi - mini <= k) {
                return i;
            }
        }

        return -1;
    }
};