
class Solution {
public:
    int searchInsertPosition(vector<int>& arr, int target) {
        // write your code here
        int low = 0 , high  = arr.size() - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if( arr[mid] == target)return mid;
            else if(arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }return low;
    }
};

low local
lower_bound snippet