class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int left =0,right =0;
        int total=0;
        while(l<r){
            if(height[l] <= height[r]){
                if(left > height[l]){
                    total +=left - height[l];
                }else{
                    left = height[l];
                }
                l++;              
            }
            else{
                if(right > height[r]){
                    total+=right - height[r];
                }else{
                    right = height[r];
                }
                r--;
            }
        }
        return total;
    }
};