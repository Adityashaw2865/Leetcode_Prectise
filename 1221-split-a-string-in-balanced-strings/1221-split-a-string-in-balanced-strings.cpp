class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int ans=0;
        for(char ch :s){
            if(ch=='L'){
                count++;
            }
            else{
                count --;
            }
            if(count==0){
                ans++;
            }
        }
        return ans;
    }
};