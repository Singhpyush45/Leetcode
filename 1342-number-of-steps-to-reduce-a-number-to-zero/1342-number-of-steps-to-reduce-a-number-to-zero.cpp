class Solution {
public:
    int numberOfSteps(int num, int ans = 0) {

        if (num == 0)
            return ans;

        if (num % 2 == 0) {
            num = num / 2;
            ans++;
        }
        else {
            num = num - 1;
            ans++;
        }

        return numberOfSteps(num, ans);
    }
};