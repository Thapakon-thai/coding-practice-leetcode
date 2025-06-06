class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        index_map = {}
        for idx, num in enumerate(nums):
            complement = target - num
            if complement in index_map:
                return [index_map[complement], idx]
            index_map[num] = idx