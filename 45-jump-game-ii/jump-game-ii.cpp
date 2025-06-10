class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() <= 1) return 0;

        int jumps = 0;
        int current_reach = 0; 
        int max_reach = 0;  

        for (int i = 0; i < nums.size() - 1; ++i) {
            max_reach = max(max_reach, i + nums[i]);

            if (i == current_reach) { 
                jumps++;
                current_reach = max_reach; 
                if (current_reach >= nums.size() - 1) return jumps; 
            }
        }
        return jumps;
    }
};