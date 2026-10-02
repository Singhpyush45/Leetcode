class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<vector<int>>v(2);
          sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums1[i]==nums1[i-1] ) continue;
              bool flag=false;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    flag=true;
                    break;
                }
            }
            if(flag==false) v[0].push_back(nums1[i]);
        }
            for(int i=0;i<m;i++){
                 if(i>0 && nums2[i]==nums2[i-1] ) continue;
                bool flag=false;
            for(int j=0;j<n;j++){
                if(nums2[i]==nums1[j]){
                    flag=true;
                    break;
                }
            }
            if(flag==false) v[1].push_back(nums2[i]);
        }
      return v;
    }
};