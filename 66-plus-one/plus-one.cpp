class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        int first = 1;
        if(digits[n-1] < 9 ) {
            digits[n-1]++;
            return digits;
        }
        if(n == 1 && digits[0] == 9) return {1,0};
        for(int i = n - 1; i >= 0; i--) {
           if(first || carry){
                digits[i]++;
                first = 0;
                carry = 0;
           }       
           if(digits[i] > 9) {
                digits[i] = 0;
                carry = 1;
           }
        }
        if(carry) {
            digits.insert(digits.begin(), 1);
        }
   
        return digits;
    }
};