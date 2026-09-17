class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(string s : words) {

            int left = 0;
            int right = s.length() - 1;

            bool palindrome = true;

            while(left < right) {

                if(s[left] != s[right]) {
                    palindrome = false;
                    break;
                }

                left++;
                right--;
            }

            if(palindrome) {
                return s;
            }
        }

        return "";
    }
};