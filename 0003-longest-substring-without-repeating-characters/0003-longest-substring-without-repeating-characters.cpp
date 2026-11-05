class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int count = 0;
            vector<int> visited(256, 0);

            for(int j = i; j < n; j++) {

                if(visited[s[j]] == 1) {
                    break;
                }

                visited[s[j]] = 1;
                count++;

                ans = max(ans, count);
            }
        }

        return ans;
    }
};