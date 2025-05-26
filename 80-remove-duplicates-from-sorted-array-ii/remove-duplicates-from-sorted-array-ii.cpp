class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) {
            return nums.size();
        }

        int i = 0;
        for (auto ele : nums) {
            if (i == 0 || i == 1 || nums[i-2] != ele){
                nums[i] = ele;
                i++;
            }
        }
        return i;
    }
};