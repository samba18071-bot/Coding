class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo=0;
        int high = n-1;
        while(lo<high){
            int mid = (lo+high)/2;
            if(arr[mid]<arr[mid+1]){
                lo = mid+1;
            }
            else{
                high = mid;
            }
        }
        return high;
    }
};