class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int n = nums.size();
        for(int i=0;i<n;i++){
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};