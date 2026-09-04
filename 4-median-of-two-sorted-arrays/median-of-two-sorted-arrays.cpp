class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>merge;
        merge.reserve(n + m);
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i] <= nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }else{
                merge.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            merge.push_back(nums1[i]);
            i++;
        }
        while(j<m){

            merge.push_back(nums2[j]);
            j++;
        }
        int length = n+m;
        if(length % 2 !=0){
            return merge[length / 2];
        }
        return (merge[(length / 2) -1] + merge[length / 2])/2.0;

    }
};