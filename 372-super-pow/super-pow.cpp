class Solution {
    const int MOD = 1337;
public:
    int superPow(int a, vector<int>& b) {
        int r = 1;
        a %= MOD;
        for (int i = 0; i < b.size(); i++) {
            r = (modPow(r, 10) * modPow(a, b[i])) % MOD;
        }
        return r;
    }
private:
    // Fast modular exponentiation (exponentiation by squaring)
    int modPow(int base, int exp) {
        int result = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }
};