class Solution {
public:
    int getSum(int a, int b) {
        int trigger = a & b;
        int ret = a ^ b;
        while(trigger)
        {
            int temp = (trigger & 0xffffffff)<<1;
            trigger = temp & ret;
            ret ^= temp;
        }
        return ret;
    }
};
