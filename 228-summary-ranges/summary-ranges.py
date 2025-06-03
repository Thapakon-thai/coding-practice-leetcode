class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        res = []
        temp = []
        for i in range(len(nums)):
            if i + 1 < len(nums) and nums[i]+1 == nums[i+1] :
                temp.append(nums[i])
            else:
                temp.append(nums[i])
                res += [temp]
                temp = []
        res2 = []
        for x in res:
            if len(x) >= 2:
                res2.append("->".join([str(x[0]), str(x[-1])]))
            else:
                res2.append(str(x[0]))

        return res2


