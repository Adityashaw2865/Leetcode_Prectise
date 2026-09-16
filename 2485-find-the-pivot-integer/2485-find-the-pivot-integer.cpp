class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = 0;

        // Total sum
        for (int i = 1; i <= n; i++) {
            totalSum += i;
        }

        int lSum = 0;

        for (int i = 1; i <= n; i++) {

            lSum += i;

            int rSum = totalSum - lSum + i;

            if (lSum == rSum) {
                return i;
            }
        }

        return -1;
    }
};