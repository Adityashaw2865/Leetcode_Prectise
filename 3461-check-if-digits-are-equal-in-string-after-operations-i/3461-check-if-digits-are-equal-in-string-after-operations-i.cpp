class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();

        while(n > 2) {
            string ans = "";

            for(int i = 0; i < n - 1; i++) {
                int num = (s[i] - '0') + (s[i + 1] - '0');

                int rem = num % 10;

                ans += char(rem + '0');
            }

            s = ans;
            n = s.size();
        }

        return s[0] == s[1];
    }
};