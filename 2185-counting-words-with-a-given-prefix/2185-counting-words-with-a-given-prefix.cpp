class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (string ch : words) {
   
            if (ch.substr(0, pref.size()) == pref) {
                         count++;
            }
        }
        return count;
    }
};