class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merged;
        merged.reserve(n + m); // Pre-allocate memory for efficiency
        
        int i = 0, j = 0;
        
        // Merge elements in sorted order
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }
        
        // If there are remaining elements in nums1
        while (i < n) {
            merged.push_back(nums1[i]);
            i++;
        }
        
        // If there are remaining elements in nums2
        while (j < m) {
            merged.push_back(nums2[j]);
            j++;
        }
        
        int totalLength = n + m;
        
        // If total elements are odd, return the middle element
        if (totalLength % 2 != 0) {
            return merged[totalLength / 2];
        }
        
        // If total elements are even, return the average of the two middle elements
        return (merged[(totalLength / 2) - 1] + merged[totalLength / 2]) / 2.0;
    }
};