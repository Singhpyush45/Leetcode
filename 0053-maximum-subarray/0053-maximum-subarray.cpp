class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CurSum = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if(CurSum<0){
                CurSum =0;
            }
            CurSum+=nums[i];
            ans=max(CurSum,ans);
        }

        return ans;
    }
};