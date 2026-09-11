class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;

        for (int num = num1; num <= num2; num++) {
            string s = to_string(num);

            // First and last digit cannot be peak/valley
            for (int i = 1; i < s.size() - 1; i++) {

                // Peak
                if (s[i] > s[i - 1] && s[i] > s[i + 1]) {
                    ans++;
                }

                // Valley
                else if (s[i] < s[i - 1] && s[i] < s[i + 1]) {
                    ans++;
                }
            }
        }

        return ans;
    }
};