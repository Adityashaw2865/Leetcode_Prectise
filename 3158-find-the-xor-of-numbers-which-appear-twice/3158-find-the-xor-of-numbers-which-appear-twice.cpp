class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        for (auto p : freq) {
            if (p.second == 2) {
                ans ^= p.first;
            }
        }

        return ans;
    }
};