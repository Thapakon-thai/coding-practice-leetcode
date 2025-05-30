class Solution {
public:
    int romanToInt(string s) {
        map<char, int> symbol;
        symbol['I'] = 1;
        symbol['V'] = 5;
        symbol['X'] = 10;
        symbol['L'] = 50;
        symbol['C'] = 100;
        symbol['D'] = 500;
        symbol['M'] = 1000;


        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && symbol[s[i]] < symbol[s[i + 1]]) {
                result -= symbol[s[i]];
            } else {
                result += symbol[s[i]];
            }
        }
            return result;
        
        
    }
};