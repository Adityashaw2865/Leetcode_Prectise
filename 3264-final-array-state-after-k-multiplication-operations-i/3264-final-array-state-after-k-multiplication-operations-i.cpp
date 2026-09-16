class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        while (k > 0) {
            
            // Minimum element ka index find karo
            int index = 0;
            
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < nums[index]) {
                    index = i;
                }
            }
            
            // Minimum element ko multiply karo
            nums[index] *= multiplier;
            
            k--;
        }
        
        return nums;
    }
};