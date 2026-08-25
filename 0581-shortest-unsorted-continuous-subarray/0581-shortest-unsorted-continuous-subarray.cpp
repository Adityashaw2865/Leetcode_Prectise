class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>ans=nums;
        sort(ans.begin(),ans.end());
        int n=nums.size();
        int left =0;
        while (left < n && nums[left] == ans[left]) {
            left++;
        }

        if (left == n)
            return 0;

        int right = n - 1;
        while (right >= 0 && nums[right] == ans[right]) {
            right--;
        }

        return right - left + 1;
    }
};