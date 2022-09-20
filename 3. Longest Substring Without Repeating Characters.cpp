class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int, int> m;
        int n = s.length();
        int ans = 0;
        for (int l = 0, r = 0; r < n; r++)
        {
            char tmp = s[r];
            if(m.find(tmp) != m.end())
            {
                l = max(m[tmp], l);
            }
            ans = max(ans, r - l + 1);
            m[tmp] = r + 1;
        }
        return ans;
    }
};
