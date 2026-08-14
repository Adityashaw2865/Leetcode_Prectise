class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {//bahut sara conditions hai  so read commnet line once 

        int n = board.size();
        int m = board[0].size();

        // 8 possible directions
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        // Traverse every cell
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int live = 0;

                // Count live neighbours
                for (int k = 0; k < 8; k++) {

                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {

                        // 1 and 2 both mean originally alive
                        if (board[ni][nj] == 1 || board[ni][nj] == 2) {
                            live++;
                        }
                    }
                }

                // Alive cell
                if (board[i][j] == 1) {

                    // Dies
                    if (live < 2 || live > 3) {
                        board[i][j] = 2;
                    }
                }

                // Dead cell
                else if (board[i][j] == 0) {

                    // Becomes alive
                    if (live == 3) {
                        board[i][j] = 3;
                    }
                }
            }
        }

        // Convert temporary states to final states
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                // 2 = alive -> dead
                if (board[i][j] == 2) {
                    board[i][j] = 0;
                }

                // 3 = dead -> alive
                else if (board[i][j] == 3) {
                    board[i][j] = 1;
                }
            }
        }
    }
};