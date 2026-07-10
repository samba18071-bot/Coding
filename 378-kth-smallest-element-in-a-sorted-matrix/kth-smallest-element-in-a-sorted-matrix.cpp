class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>flat;
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                flat.push_back(matrix[i][j]);
            }

        }
        sort(flat.begin(),flat.end());
        return flat[k-1];
    }

};