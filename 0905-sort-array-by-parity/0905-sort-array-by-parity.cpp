class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int n=nums.size();
       int count=0;
       if(n==1){
        return nums;
       }
       vector<int>even , odd;
       for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            even.push_back(nums[i]);
            count++;
        }
        else{
            odd.push_back(nums[i]);
        }

       }
       int i=0;
       for(int x : even){
        nums[i]=x;
        i++;
       }
       for(int x : odd){
        nums[i]=x;
        i++;
       }
     return nums;

    }
};