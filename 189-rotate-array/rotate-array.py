class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        #123|45 -> 54|321
        #54|321 -> 45|321
        #45|321 -> 45|123
        n = k % len(nums)
        print(n)
        # 1|2 -> 2|1
        # 2|1 -> 2|1
        temp = nums[::-1]
        nums.clear()
        nums.extend(temp[:n][::-1] + temp[n:][::-1])
        