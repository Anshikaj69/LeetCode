class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int j=height.size()-1, i=0, len, br, max_area=0;
        while(i<j){
            br= j-i;
            len = min(height[i], height[j]);
            max_area = max(max_area, len*br);

            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return max_area;
    }
};