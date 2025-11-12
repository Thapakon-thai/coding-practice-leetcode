class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if (numRows == 1 || n <= numRows) return s;
        vector<string> z;
        if(n < numRows) {
            z.resize(n);
        } else {
            z.resize(numRows);
        }

        bool moveDown = false;
        int currIdx = 0;
        for(auto &c : s) {
            z[currIdx] += c;
            if(currIdx == 0 || currIdx == numRows - 1) {
                moveDown = !moveDown;
            }
            if(moveDown) {
                currIdx += 1;
            } else {
                currIdx -= 1;
            }
        }

        string res = "";
        for(auto &s : z) {
            res += s;
        }

        return res;
    }
};


/* 
    00      03.       06
    10   12 13.    15 16
    20 21   23  24.   26
    30.     33.       36


    00          04
    10.      13 14
    20.   22.   24
    30 31       34
    40          44

*/