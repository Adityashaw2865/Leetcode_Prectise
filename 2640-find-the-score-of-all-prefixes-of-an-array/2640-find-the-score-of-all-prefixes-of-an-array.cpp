class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n);
        long long maxi=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,(long long )nums[i]);
            long long conver=nums[i]+maxi;
            sum+=conver;
            ans[i]=sum;
        }
        return ans;
    }
};