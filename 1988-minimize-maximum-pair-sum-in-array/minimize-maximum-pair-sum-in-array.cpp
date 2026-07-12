class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // 1. Store the INDICES, not the values
        int left = 0;
        int right = n - 1;
        
        // 2. Initialize res to 0 (or INT_MIN)
        int res = 0; 
        
        while (left < right) {
            // Fetch the actual elements using the indices
            int sum = nums[left] + nums[right];
            res = max(res, sum);
            
            // Move pointers toward the center
            left++;
            right--;
        }
        
        return res;
    }
};