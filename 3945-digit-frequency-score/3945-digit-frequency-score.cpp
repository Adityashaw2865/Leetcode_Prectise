class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> freq(10, 0);

        while (n > 0) {
            int x = n % 10;
            freq[x]++;
            n /= 10;
        }

        int ans = 0;

        for (int x = 0; x <= 9; x++) {
            ans += x * freq[x];
        }

        return ans;
    }
};