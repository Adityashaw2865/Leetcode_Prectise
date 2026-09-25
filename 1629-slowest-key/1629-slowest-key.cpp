class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int maxTime = releaseTimes[0];
        char ans = keysPressed[0];

        for(int i = 1; i < releaseTimes.size(); i++) {
            int time = releaseTimes[i] - releaseTimes[i - 1];

            if(time > maxTime || 
              (time == maxTime && keysPressed[i] > ans)) {
                maxTime = time;
                ans = keysPressed[i];
            }
        }

        return ans;
    }
};