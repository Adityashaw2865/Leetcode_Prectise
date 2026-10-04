class Solution {
public:
    bool checkValidString(string s) {

        int minOpen = 0;  // minimum possible '('
        int maxOpen = 0;  // maximum possible '('

        for (char ch : s) {

            if (ch == '(') {
                minOpen++;
                maxOpen++;
            }
            else if (ch == ')') {
                minOpen--;
                maxOpen--;
            }
            else { // '*'
                minOpen--;  // '*' can be ')'
                maxOpen++;  // '*' can be '('
            }

            // Even maximum '(' negative means invalid
            if (maxOpen < 0) {
                return false;
            }

            // Minimum cannot be negative
            minOpen = max(0, minOpen);
        }

        // At the end, minimum possible '(' should be 0
        return minOpen == 0;
    }
};