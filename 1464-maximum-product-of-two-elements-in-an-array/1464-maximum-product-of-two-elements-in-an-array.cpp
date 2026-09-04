class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxNum = -1;
        int secMax = -1;

        for (int n : nums) {
            if (n > maxNum) {
                secMax = maxNum;
                maxNum = n;
            }
            else if (n > secMax) {
                secMax = n;
            }
        }

        return (maxNum - 1) * (secMax - 1);
    }
};