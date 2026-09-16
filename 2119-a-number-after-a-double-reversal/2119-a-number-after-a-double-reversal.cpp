class Solution {
public:
    bool isSameAfterReversals(int num) {
        // If last digit is 0, reversal will remove that 0
        if (num % 10 == 0) {
            return num == 0;
        }

        return true;
    }
};