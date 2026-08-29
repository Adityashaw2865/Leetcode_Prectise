class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size() - 2;

        vector<int> freq(n, 0);
        vector<int> ans;

        for (int x : nums) {
            freq[x]++;
        }

        for (int i = 0; i < n; i++) {
            if (freq[i] == 2) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};