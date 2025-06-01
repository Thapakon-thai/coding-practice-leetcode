from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs: 
            return ""
        
        prefix = ""
        instance = strs[0]

        for i in range(len(instance)):
            check = instance[i]
            for j in range(1, len(strs)):
                if i >= len(strs[j]) or strs[j][i] != check:
                    return prefix

            prefix += check

        return prefix