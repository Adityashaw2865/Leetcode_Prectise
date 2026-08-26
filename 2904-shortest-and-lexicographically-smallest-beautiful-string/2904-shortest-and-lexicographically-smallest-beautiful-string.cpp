class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int count = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {

            if (s[right] == '1')
                count++;

            while (count > k) {
                if (s[left] == '1')
                    count--;
                left++;
            }

            // Exactly k ones mil gaye
            if (count == k) {

                // Left ke starting zeros remove karo
                while (s[left] == '0')
                    left++;

                string temp = s.substr(left, right - left + 1);

                if (ans == "" ||
                    temp.length() < ans.length() ||
                    (temp.length() == ans.length() && temp < ans)) {
                    ans = temp;
                }
            }
        }

        return ans;
    }
};