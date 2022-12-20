class Solution {
public:
    int firstBadVersion(int n) {
        long long start = 1;
        long long end = n;
        while (start < end) {
            long long mid = (start + end) / 2;
            isBadVersion(mid) ? end = mid : start = mid + 1;
        }
        return start;
    }
};
