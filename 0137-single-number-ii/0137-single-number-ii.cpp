class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int bit = 0; bit < 32; bit++) {
            int cnt = 0;

            for (int num : nums) {
                cnt += (static_cast<unsigned int>(num) >> bit) & 1U;
            }

            if (cnt % 3) {
                ans |= (1U << bit);
            }
        }

        return ans;
    }
};