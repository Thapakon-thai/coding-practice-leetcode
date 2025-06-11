class Solution {
public:
    const int MAXINT32 = pow(2, 31) - 1;
    const int MININT32 = pow(-2, 31);

    int reverse(int x) {
        int res = 0;
        while(x != 0 ) {
            if(res < MININT32 / 10 || res > MAXINT32 / 10) {
                return 0;
            }
            res = (res * 10) + x % 10;
            x /= 10;
        }
        return res;
    }
};