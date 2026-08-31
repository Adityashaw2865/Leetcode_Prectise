class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        // Start from top-right corner
        int row = 0;
        int col = m - 1;

        while (row < n && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            }
            else if (matrix[row][col] > target) {
                // Target smaller hai -> left jao
                col--;
            }
            else {
                // Target bada hai -> neeche jao
                row++;
            }
        }

        return false;
    }
};