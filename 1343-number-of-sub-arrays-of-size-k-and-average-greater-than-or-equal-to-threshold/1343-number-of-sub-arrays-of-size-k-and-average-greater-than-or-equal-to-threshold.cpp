
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        //   if the first window  average >= threshold to ans ++ hoga 
        if (sum >= k * threshold) {
            ans++;
        }

        // Slide the window through the remaining array
        for (int i = k; i < n; i++) {
            sum += arr[i];       // Add the new element
            sum -= arr[i - k];   // Remove the  last wlaa element 

            // window's average >= threshold
            if (sum >= k * threshold) {
                ans++;
            }
        }

        return ans; 
    }
};
