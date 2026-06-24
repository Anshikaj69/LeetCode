class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
        
        int m = mat.size(), n= mat[0].size(), r1, c1, r2,c2;
        vector<vector<int>> ps(m+1, vector<int>(n+1, 0));
        vector<vector<int>> A(m, vector<int>(n, 0));

        for(int i=1;  i<=m ; i++){
            for(int j =1; j<=n ; j++){
                ps[i][j] = mat[i-1][j-1] + ps[i-1][j] + ps[i][j-1] - ps[i-1][j-1];
            }
        }

        for(int i=0;  i<m ; i++){
            for(int j =0; j<n ; j++){
              r1 = max(0, i-k);
              c1= max(0, j-k);
              r2= min(m-1, i+k);
              c2= min(n-1, j+k);
              
              A[i][j] = ps[r2+1][c2+1] - ( ( ps[r2+1][c1] ) + ( ps[r1][c2+1] ) ) + ps[r1][c1];
            }
        }



        return A;
    }
};