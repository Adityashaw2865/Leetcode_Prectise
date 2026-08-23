class Solution {
public:
    int findEquivalent(pair<int, int>& p1, pair<int, int>& p2,
                       pair<int, int>& p3) {

        int x1 = p1.first;
        int x2 = p2.first;
        int x3 = p3.first;

        int y1 = p1.second;
        int y2 = p2.second;
        int y3 = p3.second;

        return (y3 - y2) * (x2 - x1) - (y2 - y1) * (x3 - x2);
    }

    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {

        sort(trees.begin(), trees.end());

        vector<vector<int>> result;

        deque<pair<int, int>> upper, lower;

        for (auto& tree : trees) {

            pair<int, int> p = {tree[0], tree[1]};

            while (lower.size() >= 2 &&
                   findEquivalent(lower[lower.size() - 2],
                                  lower[lower.size() - 1], p) < 0) {

                lower.pop_back();
            }

            lower.push_back(p);
        }

        for (int i = trees.size() - 1; i >= 0; i--) {

            pair<int, int> p = {trees[i][0], trees[i][1]};

            while (upper.size() >= 2 &&
                   findEquivalent(upper[upper.size() - 2],
                                  upper[upper.size() - 1], p) < 0) {

                upper.pop_back();
            }

            upper.push_back(p);
        }

        set<pair<int, int>> ans;

        for (auto& p : lower)
            ans.insert(p);

        for (auto& p : upper)
            ans.insert(p);

        for (auto& p : ans) {
            result.push_back({p.first, p.second});
        }

        return result;
    }
};