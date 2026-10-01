class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m= mat.size();
        int n=mat[0].size();

        if (m * n != r * c)
        return mat;

        vector<vector<int>>ans(r,vector<int>(c));

        for(int k=0;k<m*n;k++){
           int row = k/n;
           int col= k%n;

           int Row=k/c;
           int Col=k%c;

           ans[Row][Col]=mat[row][col];
        }
        return ans;
    }
};