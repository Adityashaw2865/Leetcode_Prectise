class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word, ans = "";
        for (int i = 0; i < k && ss >> word; i++) {
            if(i>0){
                ans+=" ";


            }
            ans+=word;
        }
        return ans;
    }
};