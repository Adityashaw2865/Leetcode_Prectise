class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;

        }
        int dup=-1;
        int miss=-1;

        for(int i=0;i<=n;i++){
            if(freq[i]==2){
                dup=i;
            }
            else if (freq[i]==0){
                miss=i;
            }
        }
        return {dup,miss};
    }
};