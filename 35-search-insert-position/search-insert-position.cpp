class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        while(l < r) {
            int mid = l + (r - l ) / 2;
            if(nums[mid] == target) 
                return mid;
            else if (target > nums[mid]) {
                l = mid + 1;
            } 
            else {
                r = mid ;
            }
        }
        return l;
    }
};