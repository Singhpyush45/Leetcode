class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes,vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;

        for(int x : aliceSizes) sumA += x;
        for(int x : bobSizes) sumB += x;

        int diff = (sumB - sumA) / 2;

        for(int i = 0; i < aliceSizes.size(); i++) {
            for(int j = 0; j < bobSizes.size(); j++) {
                if(bobSizes[j] - aliceSizes[i] == diff) {
                    return {aliceSizes[i], bobSizes[j]};
                }
            }
        }

        return {};
    }
};