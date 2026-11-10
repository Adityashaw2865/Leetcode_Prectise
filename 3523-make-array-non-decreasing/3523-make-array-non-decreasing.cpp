class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int ans=0;
        int mx=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=mx){
                ans++;
                mx=nums[i];
            }
        }
        return ans;
    }
};