class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        vector<int>odd , even;
        for(int i=0;i<n;i++){
           if(i%2!=0 ){
             odd.push_back(nums[i]);
           }
           else
             even.push_back(nums[i]);
           

        }
        sort(even.begin(),even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        int j=0;
        int k=0;
        for(int i=0;i<n;i++){
           if(i%2==0 ){
            nums[i]=even[j];
            j++;
            
           }
           else{
            nums[i]=odd[k];
            k++;
           }
           

        }
        return nums;
    }
};