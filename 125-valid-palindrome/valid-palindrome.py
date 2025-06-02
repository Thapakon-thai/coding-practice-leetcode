class Solution:
    def isPalindrome(self, s: str) -> bool:
        clean_chars = []
        for c in s.lower():
            if c.isalnum():
                clean_chars.append(c)
        clean_s = ''.join(clean_chars)
        return clean_s == clean_s[::-1]
