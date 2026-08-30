class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;

        for (int x : nums) {
            int sum = 0;
            while (x > 0) {
                int digit = x % 10;
                sum += digit;
                x = x / 10;
            }
            ans = min(sum, ans);
        }
        return ans;
    }
};