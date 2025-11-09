class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> seen;
        int maxLen = 0;
        int l = 0;

        for (int r = 0; r < s.size(); r++) {
            if (seen.find(s[r]) != seen.end()) {
                l = max(l, seen[s[r]] + 1);
            }
            seen[s[r]] = r;
            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
    }
};
