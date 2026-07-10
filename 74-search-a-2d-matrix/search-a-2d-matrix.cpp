class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int lo =0,high = n*m-1;
        while(lo<=high){
            int guess = (lo+high)/2;
            int rows = guess/m;
            int col = guess%m;
            if(matrix[rows][col]==target){
                return true;
            }
            else if(matrix[rows][col]>target){
                
                high = guess-1;
            }
            else{
                lo = guess+1;
            }
        }
        return false;
    }
};