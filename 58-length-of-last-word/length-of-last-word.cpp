class Solution {
public:
    std::string strip(const std::string& s) {
        auto start = std::find_if_not(s.begin(), s.end(), ::isspace);
        auto end = std::find_if_not(s.rbegin(), s.rend(), ::isspace).base();
        return (start < end) ? std::string(start, end) : "";
    }

    int lengthOfLastWord(string s) {
        string ss = strip(s);
        // if (ss.size() == 1) return 1;
        cout << ss;
        int c = 0;
        for(int i=ss.size()-1;i >= 0; i--) {
            if (isalpha(ss[i])) {
                c++;
            } else {
                return c;
            }
        }
        return c;
    }
};