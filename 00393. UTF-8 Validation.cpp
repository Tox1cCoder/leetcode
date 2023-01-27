class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int count = 0;
        for (auto c : data) {
            switch (count) {
                case 0:
                    if ((c >> 5) == 0b110) count = 1;
                    else if ((c >> 4) == 0b1110) count = 2;
                    else if ((c >> 3) == 0b11110) count = 3;
                    else if ((c >> 7)) return false;
                    break;
                default:
                    if ((c >> 6) != 0b10) return false;
                    count--;
                    break;
            }
        }
        return count == 0;
    }
};
