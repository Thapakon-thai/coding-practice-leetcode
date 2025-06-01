class Solution:
    def checkEqualPartitions(self, nums: List[int], target: int) -> bool:
        n = len(nums)
        for r in range(1, n):
            for subset in combinations(nums, r):
                if prod(subset) == target:
                    other_set = [x for x in nums if x not in subset]
                    if other_set and prod(other_set) == target:
                        return True
        return False