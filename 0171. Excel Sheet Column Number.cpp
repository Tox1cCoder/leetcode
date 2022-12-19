class Solution {
public:
    int titleToNumber(string s) {
        int n = s.length();
        int ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            int pos = (s[i] - 'A') + 1;
            ans = ans * 26 + pos;
        }
        
        return ans;
    }
};
