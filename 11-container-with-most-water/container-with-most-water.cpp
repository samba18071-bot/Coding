class Solution {
public:
    int maxArea(vector<int>& height) {
        int low  =0;
        int high = height.size()-1;
        int max_area =0;
        while(low<high){
            int length = min(height[low],height[high]);
            int width = high - low;
            max_area = max(max_area,length * width);
            if(height[low]< height[high]){
                low++;
            }
            else{
                high--;
            }

        }
        return max_area;
    }
};