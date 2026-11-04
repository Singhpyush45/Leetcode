
class Solution {
public:
    int countBits(int n) {
        int count = 0;

        while (n > 0) {
            count += n % 2;
            n = n / 2;
        }

        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {

        sort(arr.begin(), arr.end(), [&](int a, int b) {

            int x = countBits(a);
            int y = countBits(b);

            if (x == y) {
                return a < b;
            }

            return x < y;
        });

        return arr;
    }
};
