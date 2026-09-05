class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int y = x;
        int z;
        while (y > 0) {
            z = y % 10;
            sum = sum + z;
            y = y / 10;
        }
        if (x % sum == 0) {
            return sum;
        }
        return -1;
    }
};