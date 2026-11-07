class Solution {
public:
    long long countValidSubstrings(string s) {
        int ln=s.length();
        long long res=0;
        int ind=-1;
        for(int r=0;r<ln;r++)
        {
            if(r>=2&&s[r-2]=='a'&&s[r-1]=='b'&&s[r]=='c')
            {
                ind=r-2;
            }
            res+=r-ind;
        }
        return res;
    }
};