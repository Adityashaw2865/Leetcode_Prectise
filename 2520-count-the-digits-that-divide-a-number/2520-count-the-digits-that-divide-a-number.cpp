class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int orginal=num;

        while (num > 0) {
            int lastDigit = num % 10;

            if (orginal % lastDigit == 0) {
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};