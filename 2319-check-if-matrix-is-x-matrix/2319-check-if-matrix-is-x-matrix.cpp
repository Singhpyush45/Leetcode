class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n= grid.size();
        bool flag = false;
        for(int i=0;i<n;i++){
         if(grid[i][i]!=0 ){
            flag = true;
         }
         else{
            flag = false;
            return flag; 
         }
        }
        for(int i=0;i<n;i++){
            if(grid[i][n-i-1] !=0){
                flag = true;
            }
            else{
                flag = false;
                return false;
            }
        }
        for(int k=0;k<n*n;k++){
            int i = k/n;
            int j = k%n;
            if(i==j || i + j == n-1){
                continue;
            }
            else if(grid[i][j]==0){
                flag = true;
            }
            else{
                return false;
            }
        }
        return flag;
    }
};