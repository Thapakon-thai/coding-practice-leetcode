class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1;
        if(j == 0 && val == nums[j] || j < 0) return 0;
        else if(j == 0 && val != nums[j]) return 1;
        int c = count(nums.begin(), nums.end(), val);
        while(i < j) {
            if(nums[i] == val && nums[i] != nums[j]) {
                swap(nums[i++], nums[j--]);

            } else if(nums[i] == val && nums[i] == nums[j]){
                j--;

            } else {
                i++;
            }
        }

        return nums.size() - c;
    }
};