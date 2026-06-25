class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        long long ans = 0;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = (nums[i] == target ? 1 : -1);
        }

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (sum > 0) ans++;
            }
        }

        return ans;
    }
};