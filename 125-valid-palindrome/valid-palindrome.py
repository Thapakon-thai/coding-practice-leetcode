class Solution:
    def isPalindrome(self, s: str) -> bool:
        clean_s = ""
        for c in s.lower():
            if c.isalpha() or c.isdigit():
                clean_s += c 


        return clean_s == clean_s[::-1]