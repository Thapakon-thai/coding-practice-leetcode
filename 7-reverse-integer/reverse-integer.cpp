class Solution {
public:
    

    int reverse(int x) {
        bool minus = false;
        long num = (long)x;
        if (num < 0) minus = true;
        if (minus) num = -num;  
        long res = 0;
        while(num > 0 ) {
            res = res * 10 + num % 10;
            num /= 10;
        }
        if(minus) res *= -1;
        if(res < pow(-2, 31) || res > pow(2, 31) - 1) {
            return 0;
        }
        return res;
    }
};