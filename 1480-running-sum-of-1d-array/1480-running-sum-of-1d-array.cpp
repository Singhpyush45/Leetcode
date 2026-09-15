class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>runningSum(n,0);
        int sum =0;
        for(int i = 0 ; i<n ; i++)
        {
         for(int j = 0 ; j<=i ; j++)
         {
          sum+=nums[j];
         }
         runningSum[i]=sum;
         sum =0;
        }
        return runningSum;
    }
};