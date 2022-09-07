class Solution {
public:
   string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;

    const int len = s.length();
    const int cycleLen = 2 * numRows - 2;
    string res = "";

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j + i < len; j += cycleLen)
        {
            res += s[j + i];
            bool notFirstRow = i != 0;
            bool notLastRow = i != numRows - 1;
            int nextIndex = j + cycleLen - i;

            if (notFirstRow && notLastRow && nextIndex < len)
                res += s[nextIndex];
        }
    }

    return res;
}
};
