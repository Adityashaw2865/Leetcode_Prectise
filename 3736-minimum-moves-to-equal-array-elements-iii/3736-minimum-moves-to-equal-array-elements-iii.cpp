class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        int n=nums.size();
        for (int num : nums) {
            maxi = max(maxi, num);
            sum += num;
        }
        return (maxi * n) - sum;
    }
};