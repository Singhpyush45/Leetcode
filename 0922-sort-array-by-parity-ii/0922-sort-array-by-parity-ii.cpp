class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int n=nums.size();
       vector<int>odd , even;
       for(int x : nums){
        if(x%2==0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }

       } 
        int i =0;
        for(int x : even){

         nums[i]=x;
         i+=2;
        }
        int j=1;
        for(int x : odd){

         nums[j]=x;
         j+=2;
        }
        return nums;

    }
};