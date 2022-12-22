class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, int> p2i;
        unordered_map<string, int> w2i;
        string word;
        int i = 0, n = pattern.size();
        istringstream in(str);
        while (in >> word) {
          if (i == n || p2i[pattern[i]] != w2i[word]) {
            return false;
          }
          p2i[pattern[i]] = w2i[word] = i + 1;
          i++;
        }
        return i == n;
    }
};
