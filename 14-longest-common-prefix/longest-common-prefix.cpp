class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string instance = strs[0];
        string prefix = "";
        for(int i=0;i<instance.size();++i) {
            char check = instance[i];
            for(int j=1;j<strs.size();++j) {
                if(i >= strs[j].size() || strs[j][i] != check) {
                    return prefix;
                }
            }
            prefix += check;
        
        }
        return prefix;
    }
};