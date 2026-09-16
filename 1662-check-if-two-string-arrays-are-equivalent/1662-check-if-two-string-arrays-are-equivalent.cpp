class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1 = "";
        string ans2 = "";
        for (string s : word1) {
            ans1 += s;
        }
        for (string str : word2) {
            ans2 += str;
        }
        return ans1==ans2;
    }
};