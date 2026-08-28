class Solution {
public:
    int maxDistinct(string s) {
        int sz=0;
        set<char>st(s.begin(),s.end());
        for(char c :st){
            sz++;
        }
        return sz;
    }
};