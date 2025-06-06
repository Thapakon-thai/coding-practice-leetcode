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

        for(auto x : tmp) {
            cout << x[0] << " " << x[1] << " " << x[2] << endl;
        }
        return cnt;
    }
};