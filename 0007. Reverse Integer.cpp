class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN){
            return 0;
        }
        bool isNegative = 0;
        if (x < 0) {
            isNegative = 1;
            x = -x;
        }
        long long r = 0;
        while (x > 0) {
            r = r * 10 + x % 10;
            x /= 10;
        }
        if (r > INT_MAX) {
            return 0;
        }
        return (isNegative ? -r : r);
    }
};
