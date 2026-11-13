class Solution {
public:
    int countHomogenous(string s) {
        long long  ans=0;
        long long  count=1;
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                count++;

            }
            else{
                ans+=(count*(count+1)/2);
                count=1;
            }
        }
        ans+=(count*(count+1))/2;
        return ans%1000000007;
    }
};