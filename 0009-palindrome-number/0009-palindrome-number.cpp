class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        vector<int> ans;

        while (x > 0) {
            int r = x % 10;
            x = x / 10;
            ans.push_back(r);
        }

        int i = 0;
        int j = ans.size() - 1;

        while (i <= j) {
            if (ans[i] != ans[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};