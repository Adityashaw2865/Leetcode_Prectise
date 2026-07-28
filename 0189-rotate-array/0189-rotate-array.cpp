class Solution {
public:
    void reverse(vector<int>& nums, int l, int r) {
        while(l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        // Step 1: Reverse whole array
        reverse(nums, 0, n - 1);
        
        // Step 2: Reverse first k elements
        reverse(nums, 0, k - 1);
        
        // Step 3: Reverse remaining elements
        reverse(nums, k, n - 1);
    }
};