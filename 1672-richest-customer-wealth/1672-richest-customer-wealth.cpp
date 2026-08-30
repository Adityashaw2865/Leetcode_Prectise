class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(auto x:accounts){
            int sum=0;
            for(auto money:x){
                sum+=money;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};