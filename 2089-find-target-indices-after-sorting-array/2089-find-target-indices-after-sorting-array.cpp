class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // Sort the array first
        sort(nums.begin(), nums.end());

        vector<int> ans;

        // lower_bound gives the index of the first element
        // which is greater than or equal to target
        int first = lower_bound(nums.begin(), nums.end(), target) 
                    - nums.begin();

        // upper_bound gives the index of the first element
        // which is strictly greater than target
        int last = upper_bound(nums.begin(), nums.end(), target) 
                   - nums.begin();

        // All elements from 'first' to 'last - 1'
        // are equal to target
        for (int i = first; i < last; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};