class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        // Find the common width
        int width = min(rec1[2], rec2[2]) - max(rec1[0], rec2[0]);
        
        // Find the common height 
        int height = min(rec1[3], rec2[3]) - max(rec1[1], rec2[1]);
        
        // positive hoga to overlap 
        return width > 0 && height > 0;
    }
};
