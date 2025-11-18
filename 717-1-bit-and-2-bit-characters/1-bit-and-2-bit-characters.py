class Solution:
    def isOneBitCharacter(self, bits: List[int]) -> bool:
        n = len(bits)
        if n <= 2:
            return not bits[0]
        if bits[-1] == 1:
            return False

        zero = False
        i = 0
        while i < n:
            if bits[i] == 0:
                i += 1
                check = True
            elif bits[i] == 1:
                i+= 2
                check = False

        
        return check
             