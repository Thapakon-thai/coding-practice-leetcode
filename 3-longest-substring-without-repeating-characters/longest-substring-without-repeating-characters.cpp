class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;

        string t = "";
        for(int i=0; i<s.size(); i++) {
            t+= s[i];
            for(int j=i+1; j<s.size(); j++) {
                if(t.find(s[j]) == string::npos) {
                    t+= s[j];
                } else {
                    break;
                }
            }
            if(t.size() > maxLen)
                maxLen = t.size();

            t = "";
        }
        return maxLen;
        
    }
};