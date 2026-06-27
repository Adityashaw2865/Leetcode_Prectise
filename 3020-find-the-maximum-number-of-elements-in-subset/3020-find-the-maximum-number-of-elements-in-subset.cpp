class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;
        for (int x : nums) freq[x]++;

        int ans = 1;

        // Special case for 1
        if (freq.count(1)) {
            int c = freq[1];
            ans = max(ans, (c & 1) ? c : c - 1);
        }

        for (auto &it : freq) {
            long long cur = it.first;
            if (cur == 1) continue;

            int len = 1; // current element as center

            while (freq[cur] >= 2) {
                // Prevent overflow
                if (cur > 1000000000LL) break;

                long long nxt = cur * cur;

                // Can't continue the chain
                if (!freq.count(nxt)) break;

                len += 2;
                cur = nxt;
            }

            ans = max(ans, len);
        }

        return ans;
    }
};