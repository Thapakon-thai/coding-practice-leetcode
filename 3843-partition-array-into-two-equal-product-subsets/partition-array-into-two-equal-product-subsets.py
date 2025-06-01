class Solution:
    def checkEqualPartitions(self, nums: List[int], target: int) -> bool:
        product = 1
        for each in nums:
            product *= each
        return product == target ** 2