class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        int n=groupSizes.size();
        vector<vector<int>>mp(n+1);
        for(int i=0;i<n;i++){
            int L=groupSizes[i];
            mp[L].push_back(i);
            if(mp[L].size()==L){
                ans.push_back(mp[L]);
                mp[L]={};
            }
        }
        return ans;
    }
};