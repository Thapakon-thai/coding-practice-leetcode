class Solution:
    def addBinary(self, a: str, b: str) -> str:
        result = ""
        l_a = len(a)
        l_b = len(b)
        if l_a < l_b:
            a = "0" * (l_b-l_a) + a
        elif l_b < l_a:
            b = "0" * (l_a-l_b) + b

        carry = 0
        for i in range(1, len(a) + 1):
            if a[-i] == "1" and b[-i] == "1" and carry == 0:
                result = "0" + result
                carry = 1
                
            elif a[-i] == "1" and b[-i] == "1" and carry == 1:
                result = "1" + result
                carry = 1

            elif (a[-i] == "1" or b[-i] == "1") and carry == 1:
                result = "0" + result
                carry = 1

            elif (a[-i] == "1" or b[-i] == "1") and carry == 0:
                result = "1" + result
                carry = 0

            elif a[-i] == "0" and b[-i] == "0" and carry == 1:
                result = "1" + result
                carry = 0

            elif a[-i] == "0" and b[-i] == "0" and carry == 0:
                result = "0" + result
                carry = 0

        if carry == 1:
            result = "1" + result
        
            

        return result
            