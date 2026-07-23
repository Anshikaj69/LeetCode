class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        

        int max_area=0, area  =0 , n = heights.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<int> s;

        for(int i = n-1; i>=0 ; i--){
            
            while(!s.empty() && heights[s.top()] >= heights[i]){
                s.pop();
            }

            if(s.empty()){
                right[i] = n;
            }else{
                right[i] = s.top();
            }

            s.push(i);
        }

        s = stack<int>();

        for(int i = 0 ; i < n ; i++){
            
            while(!s.empty() && heights[s.top()] >= heights[i]){
                s.pop();
            }

            if(s.empty()){
                left[i] = -1;
            }else{
                left[i] = s.top();
            }

            s.push(i);
        }

        for(int i = 0 ; i < n ; i++){

            area = heights[i]  * ( right[i]-left[i]-1 );
            max_area = max(max_area, area);
        }

        return max_area;
    }
};