
class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        int n = s.size();

        // Har digit ko same parity wale digits se hi swap kar sakte hain
        for (int i = 0; i < n; i++) {
            int maxi = i;

            // Aage ke digits mein same parity ka maximum digit dhundo
            for (int j = i + 1; j < n; j++) {
                if ((s[j] - '0') % 2 == (s[i] - '0') % 2 &&
                    s[j] > s[maxi]) {
                    maxi = j;
                }
            }

            // Maximum digit ko current  pos karega 
            swap(s[i], s[maxi]);
        }

        // String ko integer conversion 
        return stoi(s);
    }
};
