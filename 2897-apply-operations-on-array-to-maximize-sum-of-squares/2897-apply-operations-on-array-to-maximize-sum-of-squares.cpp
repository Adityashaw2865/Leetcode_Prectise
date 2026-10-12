
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7; // Modulo value

        vector<int> bits(32, 0); // Count of each bit in all numbers

        // Traverse every number in the array
        for (int num : nums) {
            // Check all 32 bits of the current number
            for (int b = 0; b < 32; b++) {
                // Check whether the b-th bit is set
                if (num & (1 << b)) {
                    bits[b]++; // Increase count of this bit
                }
            }
        }

        long long ans = 0; // Store the final answer

        // Construct k numbers greedily
        for (int i = 0; i < k; i++) {
            long long num = 0; // Start with zero

            // Check every bit position
            for (int b = 0; b < 32; b++) {
                // If this bit is available
                if (bits[b] > 0) {
                    num |= (1LL << b); // Set this bit in the number
                    bits[b]--; // Use one occurrence of this bit
                }
            }

            // Add the square of the constructed number
            ans = (ans + num * num) % MOD;
        }

        return ans; // Return the maximum sum modulo MOD
    }
};
