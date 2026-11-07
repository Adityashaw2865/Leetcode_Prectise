class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>9*n) return -1;

        string ans="";
        for(int i=0;i<n;i++){
            int digit=min(9,s);
            ans+=to_string(digit);
            s-=digit;
        }
        if(ans[0]=='0')return 0;
        return stoi(ans);
    }
};