'''
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
determine if the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
'''


class Solution:
    def isValid(self, s: str) -> bool:

        stack = []
        maps = {
            '[': ']',
            '(': ')',
            '{': '}'
        }

        for i in s:

            if i in ['[', '{', '(']:
                stack.append(maps[i])
            elif len(stack) != 0:
                if stack.pop() != i:
                    return False
            else:
                return False

        return len(stack) == 0
