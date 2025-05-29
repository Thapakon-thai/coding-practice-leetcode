class Solution:
    def jump(self, nums: List[int]) -> int:

        memo = [10001] * len(nums)

        return self.jumpHelper(nums, 0, memo)
        
    def jumpHelper(self, nums, index, memo):
        if index >= len(nums) - 1:
            return 0
       
        if memo[index] != 10001:
            return memo[index]

        possible_jump = nums[index]

        for jump in range(1, possible_jump+1):
            memo[index] = min(memo[index], self.jumpHelper(nums, index + jump, memo) + 1)
        
        return memo[index]
        