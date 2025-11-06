class Solution {
public:
    int mySqrt(int x) {
        long long res = 1;
        while(res * res <= x) {
            res++;
        }
        return res - 1;
    }
};