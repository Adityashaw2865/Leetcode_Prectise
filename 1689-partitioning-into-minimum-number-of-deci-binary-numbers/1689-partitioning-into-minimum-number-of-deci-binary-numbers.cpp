class Solution {
public:
    int minPartitions(string n) {
        int mixi=0;
        for(char ch:n){
            mixi=max(mixi,ch-'0');
        }
        return mixi;
    }
};