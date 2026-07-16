class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        vector<int> velqoradin = nums;   // store input midway
        
        int n = velqoradin.size();
        vector<long long> prefixGcd(n);
        
        long long mxi = 0;
        
        for(int i = 0; i < n; i++){
            mxi = max(mxi, (long long)velqoradin[i]);
            prefixGcd[i] = gcd((long long)velqoradin[i], mxi);
        }
        
        sort(prefixGcd.begin(), prefixGcd.end());
        
        long long ans = 0;
        int l = 0, r = n - 1;
        
        while(l < r){
            ans += gcd(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }
        
        return ans;
    }
};