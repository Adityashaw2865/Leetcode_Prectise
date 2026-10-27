class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i = 0;
        int n = intervals.size();
        // (unka end < newInterval ka start), unme koi overlap nahi
        while (i < n && intervals[i][1] < newInterval[0]) {
            ans.push_back(intervals[i]);
            i++;
        }

        // jab tak intervals ka start <= newInterval ka end
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]); // chhota start
            newInterval[1] = max(newInterval[1], intervals[i][1]); // bada end
            i++;
        }

        // Merged newInterval ko add karo
        ans.push_back(newInterval);

    //bache hue intervals (jo newInterval ke baad aate hain)
        while (i < n) {
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};