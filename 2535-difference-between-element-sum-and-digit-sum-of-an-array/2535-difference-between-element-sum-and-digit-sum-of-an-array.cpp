class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = 0;
        int digSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            eleSum += nums[i];

            int x = nums[i];

            while (x > 0) {
                digSum += x % 10;
                x = x / 10;
            }
        }

        return eleSum - digSum;
    }
};