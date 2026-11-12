class Solution {
public:
    int maxPower(string s) {
        int ans = 1;
        int count = 1;
        int n = s.size();
        for (int i = 1; i < n; i++) {
            if(s[i]==s[i-1]){
                count++;

            }
            else{
                count=1;
            }
            ans=max(count,ans);
        }
        return ans;
    }
};