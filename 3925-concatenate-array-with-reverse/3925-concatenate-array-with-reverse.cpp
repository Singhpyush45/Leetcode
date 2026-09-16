class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        int m = 2*n;
        int f = nums.size()-1;

        vector<int> ans(m);

        for(int i = 0; i<=n-1;i++){
            ans[i]=nums[i];
        }
        for(int j=m-n;j<=m-1;j++){
          ans[j]=nums[f];
          f--;
        }
        return ans;

    }
};