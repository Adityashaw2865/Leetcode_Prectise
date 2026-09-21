class Solution {
public:
    int diagonalSum(vector<vector<int>>& matrix) {
        int ans=0;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j||i+j==n-1){
                    ans+=matrix[i][j];
                }
            }
        }
        return ans;
    }
};