class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;

        // Saare digits nikal lo
        while (num > 0) {
            digits.push_back(num % 10);
            num = num / 10;
        }

        // Digits ko ascending order mein sort karo
        sort(digits.begin(), digits.end());

        // Chhote digits ko tens place par rakho
        int num1 = digits[0] * 10 + digits[2];
        int num2 = digits[1] * 10 + digits[3];

        return num1 + num2;
    }
};