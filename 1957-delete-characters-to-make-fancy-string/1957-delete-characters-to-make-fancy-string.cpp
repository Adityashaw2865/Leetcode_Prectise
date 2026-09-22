class Solution {
public:
    string makeFancyString(string s) {

        string ans = "";

        for (char ch : s) {

            if (ans.size() < 2 ||
                !(ans.back() == ch && ans[ans.size() - 2] == ch)) {
                
                ans += ch;
            }
        }

        return ans;
    }
};