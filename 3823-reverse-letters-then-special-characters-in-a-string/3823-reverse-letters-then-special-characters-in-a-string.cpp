class Solution {
public:
    string reverseByType(string s) {
        int n = s.size();
        string letters = "", special = "";

        for (char c : s) {
            if (isalpha(c))
                letters += c;
            else
                special += c;
        }

        reverse(letters.begin(), letters.end());
        reverse(special.begin(), special.end());

        int i = 0, j = 0;

        for (int k = 0; k < n; k++) {
            if (isalpha(s[k]))
                s[k] = letters[i++];
            else
                s[k] = special[j++];
        }

        return s;
    }
};