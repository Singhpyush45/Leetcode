class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int right = nums.size() - 1;

        while (low < right) {
            int mid = low + (right - low) / 2;

            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1])
                low = mid + 2;
            else
                right = mid;
        }

        return nums[low];
    }
};