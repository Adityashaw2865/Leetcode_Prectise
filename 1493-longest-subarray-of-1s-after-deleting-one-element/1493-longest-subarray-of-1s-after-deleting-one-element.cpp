class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zc = 0;
        int ans = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                zc++;
            }
            while (zc > 1) {
                if (nums[left] == 0) {
                    zc--;
                }
                left++;
            }
            ans=max(ans,right-left);
        }
        return ans;
    }
};