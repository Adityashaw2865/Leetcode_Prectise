
class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for (int i = 0; i <= s.size(); i++) {

            if (i == s.size() || s[i] == ' ') {

                int stl = i - 1;

                while (start < stl) {
                    swap(s[start], s[stl]);
                    start++;
                    stl--;
                }

                start = i + 1;
            }
        }

        return s;
    }
};
