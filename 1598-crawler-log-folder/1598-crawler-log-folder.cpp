class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        int n=logs.size();
        for(int i=0;i<n;i++){
            if(logs[i]=="../"){
                if(count >0){
                    count--;

                }
            }
            else if(logs[i]=="./"){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
    }
};