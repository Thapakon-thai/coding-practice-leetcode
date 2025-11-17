class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int dt = 0;
        bool start = false;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] && !start) {
                dt = 0;
                start = !start;
            } else if(nums[i] && start) {
                if(dt < k) return false;
                dt = 0;
            } else {
                dt++;
            }
            
        }

        return true;
    }
};