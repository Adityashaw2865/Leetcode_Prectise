class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int operations = 0;
        
        // Process every column
        for (int j = 0; j < n; j++) {
            
            // Start from second row
            for (int i = 1; i < m; i++) {
                
                // Current element must be greater than above element
                if (grid[i][j] <= grid[i - 1][j]) {
                    
                    int required = grid[i - 1][j] + 1;
                    
                    operations += required - grid[i][j];
                    
                    // Update grid for next comparisons
                    grid[i][j] = required;
                }
            }
        }
        
        return operations;
    }
};