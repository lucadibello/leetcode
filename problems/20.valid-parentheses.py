#
# @lc app=leetcode id=20 lang=python3
#
# [20] Valid Parentheses
#

# @lc code=start
from collections import deque
class Solution:
    def isValid(self, s: str) -> bool:
        # Buffer to keep track of all found brackets
        buffer = deque()
        openBrackets = ["[", "{", "("]

        # Cycle through each symbol in the string
        for symbol in s:
            # If open, we append
            if symbol in openBrackets:
                buffer.append(symbol)
            elif len(buffer) > 0:
                # We check wether the last bracket has been closed
                lastBracket = buffer.pop()
                
                # Simple if to determine if its the right bracket
                if (lastBracket == "[" and symbol == "]") or (lastBracket == "(" and symbol == ")") or (lastBracket == "{" and symbol == "}"): 
                    continue
                else:
                    return False
            else:
                return False

        # If all buffer is empty, it means that all brackets are correct!
        return True if len(buffer) == 0 else False
        
# @lc code=end