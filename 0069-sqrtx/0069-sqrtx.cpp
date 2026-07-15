class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        int lo = 0;
        int hi = x;

        for (int i = lo; lo <= hi; i++) {
            int mid = lo + (hi - lo) / 2;

            if ((long long)mid * mid == x) {
                return mid;
            }
            else if ((long long)mid * mid > x) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }

        return hi;
    }
};