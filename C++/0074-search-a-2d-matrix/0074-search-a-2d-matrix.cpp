class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(), rmid, cmid;
        bool res = false;
        int rl=0, rr=m-1;

        while(rl <= rr){
            rmid = ( rl + rr ) / 2;
            if( matrix[rmid][0] <= target && matrix[rmid][n-1] >= target ){
                int cl=0, cr=n-1;
                while(cl <= cr){
                 //classic binary search
                  cmid = (cl + cr) / 2;

                  if(matrix[rmid][cmid] == target){
                    res = true;
                    return res;
                  }
                  if(matrix[rmid][cmid] < target){
                    cl = cmid+1;
                  }else{
                    cr = cmid-1;
                  }
                }

                return res;

            }else if(target < matrix[rmid][0]){
                rr = rmid-1;
            }else if(target > matrix[rmid][n-1]){
                rl = rmid+1;
            }
        }

        return res;
    
    }
};