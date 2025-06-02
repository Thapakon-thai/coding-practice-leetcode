class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        
        # clean_t = list(filter(lambda x: x in s, t))
        # clean_t = "".join(clean_t)
        idx = -1
        count = 0
        for c in s:
            if c not in t:
                return False
            for cc in range(len(t)):
                if  c==t[cc] and cc > idx:
                    idx = cc
                    count += 1
                    break

        return count == len(s)
        