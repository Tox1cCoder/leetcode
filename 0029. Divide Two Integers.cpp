class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == INT_MIN)
            return dividend == INT_MIN ? 1 : 0;

        if (dividend == 0)
            return 0;

        if (dividend == INT_MIN) {
            if (divisor == 1)
                return INT_MIN;
            else if (divisor == -1)
                return INT_MAX;
        }

        bool sign = false;
        if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
            sign = true;

        if (dividend > 0)
            dividend = -dividend;

        if (divisor > 0) 
            divisor = -divisor;

        int MAX = INT_MIN >> 1;
        int ans = 0;

        while (dividend <= divisor) {
            int temp = divisor;
            int step = -1;

            while (temp >= MAX && step >= MAX && temp >= dividend - temp) {
                temp += temp;
                step += step;
            }

            dividend -= temp;
            ans += step;
        }
        return (sign ? ans : -ans);
    }
};
