class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        int m= matrix.size(), n=matrix[0].size();
        int r= ((m-1 ==0)? 0 : m-1), c = 0;
        

        while( r<m && r>=0 && c < n ){
            if(matrix[r][c] == target){
                return true;
            }
            if(matrix[r][c] > target){
                r = r-1;
            }else if(matrix[r][c] < target){
                c = c+1;
            }
        }

        return false;
    }
};