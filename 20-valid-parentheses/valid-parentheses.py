class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        if len(s) < 2:
            return False

        for p in s:
            if p in "({[":
                stack.append(p)
            elif len(stack) != 0 and p == '}' and stack[-1] == '{':
                stack.pop()
            elif len(stack) != 0 and p == ')' and stack[-1] == '(':
                stack.pop()
            elif len(stack) != 0 and p == ']' and stack[-1] == '[':
                stack.pop()
            else:
                return False
                
        return len(stack) == 0