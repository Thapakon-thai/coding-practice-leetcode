class Solution:
    def isPalindrome(self, s: str) -> bool:
        clean_s = [c for c in s.lower() if c.isalnum()]
        
        return clean_s == clean_s[::-1]
