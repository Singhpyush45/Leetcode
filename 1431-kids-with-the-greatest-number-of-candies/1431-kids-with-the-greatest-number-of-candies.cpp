class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result(candies.size(),true);
        int n= candies.size();
        int great =0;
        for(int i =0;i<n;i++){
           if(great<candies[i]){
            great = candies[i];
           }
        }

        for(int i =0;i<n;i++){
           if(candies[i]+extraCandies < great){
            result[i]=false;
           }
        }
        return result;
    }
};