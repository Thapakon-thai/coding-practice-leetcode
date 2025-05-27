class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        collection = dict()
        for i, v in enumerate(nums):
            if target - v in collection:
               return [collection[target - v], i]
            else: 
                collection[v] = i

        