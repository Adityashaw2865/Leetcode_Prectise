class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();

        vector<int> best(n, INT_MAX);

        int left = 0;
        int sum = 0;
        int ans = INT_MAX;

        for (int right = 0; right < n; right++) {

            sum += arr[right];

            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            // Current subarray mila
            if (sum == target) {
                int len = right - left + 1;

                // Pehle wale part me koi subarray hai?
                if (left > 0 && best[left - 1] != INT_MAX) {
                    ans = min(ans, len + best[left - 1]);
                }

                // Current subarray ko store karo
                if (right == 0)
                    best[right] = len;
                else
                    best[right] = min(best[right - 1], len);
            }
            else {
                // Previous best ko carry forward karo
                if (right > 0)
                    best[right] = best[right - 1];
            }
        }

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};