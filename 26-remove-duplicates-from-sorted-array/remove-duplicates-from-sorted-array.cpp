class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> unique;
        unique.push_back(nums[0]);
        int uniqueElementIdx = 0;
        for(int i = 0; i < nums.size(); i++) {
            if( i+1 < nums.size()) {
                uniqueElementIdx = i+1;
            }
            if(nums[i] != nums[uniqueElementIdx]) {
                unique.push_back(nums[uniqueElementIdx]);
            }

        }
        int i = 0;
        for(auto v:unique) {
            nums[i++] = v;

        }
        return unique.size();
    }
};