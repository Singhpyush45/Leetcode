class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int ans=0;
        vector<int>result(heights);
        sort(result.begin(),result.end());
        for(int i=0;i<n;i++){
            if(heights[i]==result[i]){
              
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};