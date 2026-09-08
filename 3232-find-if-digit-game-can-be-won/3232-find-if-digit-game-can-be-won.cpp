class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int doub = 0;

        for (int x : nums) {
            if (x >= 1 && x <= 9) {
                single += x;
            }
            else {
                doub += x;
            }
        }

        return single > doub || doub > single;
    }
};