class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i = 0;
        int j = grid[0].size() - 1;
        int count = 0;

        while (i < grid.size()) {
            if (j >= 0 && grid[i][j] < 0) {
                count++;
                j--;
            }
            else {
                i++;
                j = grid[0].size() - 1;
            }
        }

        return count;
    }
};