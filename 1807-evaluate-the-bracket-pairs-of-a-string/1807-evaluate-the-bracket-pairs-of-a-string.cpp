class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        // knowledge ko map me store karenge
        unordered_map<string, string> mp;
        
        for(int i = 0; i < knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        
        string ans = "";
        
        for(int i = 0; i < s.size(); i++) {
            
            // agar normal character hai
            if(s[i] != '(') {
                ans += s[i];
            }
            else {
                // '(' ke baad key start hogi
                string key = "";
                i++;
                
                // ')' tak key banate jao
                while(s[i] != ')') {
                    key += s[i];
                    i++;
                }
                
                // key map me hai
                if(mp.find(key) != mp.end()) {
                    ans += mp[key];
                }
                else {
                    // key nahi mili
                    ans += "?";
                }
            }
        }
        
        return ans;
    }
};