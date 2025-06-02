class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.split(" ")
        res = ""
        for x in s[::-1]:
            if x.isalpha():
                res = x
                break
        print(s)
        return len(res)