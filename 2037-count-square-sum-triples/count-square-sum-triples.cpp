class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        vector<vector<int>> tmp;
        for (int a = 1; a <= n; a++) {
            for(int b = 1; b <= n; b++) {
                int t = (a*a)+(b*b);
                int c = sqrt(t);
                if(c <= n && c * c == t) {
                    tmp.push_back({a,b,c});
                    cnt++;
                }
            }
        }
        return cnt;
    }
};