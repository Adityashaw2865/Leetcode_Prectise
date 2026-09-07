class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations = 0;

        for (int i = 1; i < nums.size(); i++) {
            
            // If current element is not greater than previous
            if (nums[i] <= nums[i - 1]) {
                
                // Calculate how many increments are needed
                int diff = nums[i - 1] + 1 - nums[i];
                
                operations += diff;
                
                // Update current element
                nums[i] = nums[i - 1] + 1;
            }
        }

        return operations;
    }
};