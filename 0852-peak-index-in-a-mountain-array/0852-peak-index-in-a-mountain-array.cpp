class Solution {
public:
  int peakIndexInMountainArray(vector<int>& arr) {
    int left = 1, right = arr.size() - 2;
    int mid=left+(right-left)/2;
    while(left<=right){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid-1]){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
        mid=left+(right-left)/2;
    }
    return -1;
}
};