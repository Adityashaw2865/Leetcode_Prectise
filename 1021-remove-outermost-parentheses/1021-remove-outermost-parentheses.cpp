class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans = "";
        int count = 0;
        
        for(char ch : s) {
            
            if(ch == '(') {
                
                // Agar count > 0 hai,
                // matlab ye outermost '(' nahi hai
                if(count > 0) {
                    ans += ch;
                }
                
                count++;
            }
            
            else {
                
                count--;
                
                // Agar count > 0 hai,
                // matlab ye outermost ')' nahi hai
                if(count > 0) {
                    ans += ch;
                }
            }
        }
        
        return ans;
    }
};