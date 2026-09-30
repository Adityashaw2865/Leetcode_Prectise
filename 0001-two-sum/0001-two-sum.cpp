class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Check every possible pair
        for(int i = 0; i < nums.size(); i++) {

            for(int j = i + 1; j < nums.size(); j++) {

                // If sum of two numbers is target
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};