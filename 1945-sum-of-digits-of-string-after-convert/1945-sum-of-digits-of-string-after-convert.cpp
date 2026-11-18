class Solution {
public:
    int getLucky(string s, int k) {
        long long sum=0;
        for(int i=0;i<s.size();i++){
            int num=s[i]-'a'+1;
            while(num>0){
                sum+=num%10;
                num/=10;

            }
        }
        k--;
        while(k--){
            int temp=0;
            while(sum>0){
                temp+=sum%10;
                sum/=10;

            }
            sum=temp;

        }
        return sum;
    }
};