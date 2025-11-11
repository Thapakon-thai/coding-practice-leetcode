class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        start = 0
        maxLen = 1
        if n < 2:
            return s
        def expand(left: int, right: int):
            nonlocal start, maxLen
            while left >= 0 and right < n and s[left] == s[right]:
                currLen = right - left + 1
                if currLen > maxLen:
                    maxLen = currLen
                    start = left
                
                left -= 1
                right += 1
        
        for i in range(n):
            expand(i, i)
            expand(i, i+1)

        return s[start:start+maxLen]


        
            
       