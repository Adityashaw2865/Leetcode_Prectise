class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count = 0;

        while (target > 1) {

            // agar  koi  doubling operation na to just -1 jabtak reach na hoyee
            if (maxDoubles == 0) {
                count += target - 1;
                break;
            }

            // target even hai to 
            if (target % 2 == 0) {
                target = target / 2;
                maxDoubles--;
                count++;
            }
            else {
                // agar  target  odd hai to 
                target--;
                count++;
            }
        }

        return count;
    }
};