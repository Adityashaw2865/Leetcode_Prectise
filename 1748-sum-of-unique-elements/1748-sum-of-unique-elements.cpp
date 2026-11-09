class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      int freq[101]={0};
      for(int num:nums){
        freq[num]++;
      } 
      int ans=0;
      for(int num:nums){
        if(freq[num]==1){
            ans+=num;
        }
      } 
      return ans;
    }
};