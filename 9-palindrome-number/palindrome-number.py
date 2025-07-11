class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x >= 0 and x < 10:
            return True
        if x % 10 == 0:
            return False
        if x < 0:
            return False

        revert_num = 0
        while x > revert_num:
            revert_num = revert_num * 10 + x % 10
            x //= 10
        
        return x == revert_num or x == revert_num // 10
        
        #x_str = str(x)
        #return x_str == x_str[::-1]     