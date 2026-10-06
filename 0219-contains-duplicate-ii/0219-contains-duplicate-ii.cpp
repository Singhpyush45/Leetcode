class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k == 0) return false;

        unordered_set<int> st;
        int i = 0;

        while(i < nums.size()) {

            if(st.find(nums[i]) != st.end()) {
                return true;
            }

            st.insert(nums[i]);

            if(st.size() > k) {
                st.erase(nums[i - k]);
            }

            i++;
        }

        return false;
    }
};