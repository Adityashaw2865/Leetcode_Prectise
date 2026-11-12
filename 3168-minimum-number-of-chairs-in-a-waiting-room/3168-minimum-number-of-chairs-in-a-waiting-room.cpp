class Solution {
public:
    int minimumChairs(string s) {
        int ans = 0;
        int count = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if(s[i]=='E'){
                count++;
            }
            else{
                count--;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};