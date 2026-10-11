class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
       int n=aliceSizes.size();
       int m=bobSizes.size();
       int Asum=0;
       int Bsum=0;
       int mid =0;
       vector<int>ans;
       for(int i=0;i<n;i++){
        Asum+=aliceSizes[i];
       }
        for(int i=0;i<m;i++){
        Bsum+=bobSizes[i];
       }
       mid=(Asum-Bsum)/2;
      
        for (int i = 0; i < aliceSizes.size(); i++) {
            for (int j = 0; j < bobSizes.size(); j++) {
                if (aliceSizes[i] - bobSizes[j] == mid) {
                    return {aliceSizes[i], bobSizes[j]};
                }
            }
        }

        return {};


    }
};