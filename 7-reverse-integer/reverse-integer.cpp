class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x != 0 ) {
            if(res < pow(-2, 31) / 10 || res > (pow(2, 31) - 1) / 10) {
                return 0;
            }
            res = (res * 10) + x % 10;
            x /= 10;
        }
        return res;
    }
};