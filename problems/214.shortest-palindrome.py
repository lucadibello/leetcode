#
# @lc app=leetcode id=214 lang=python3
#
# [214] Shortest Palindrome
#

# @lc code=start
class Solution:
    def shortestPalindrome(self, s: str) -> str:
        reverse = s[::-1]
        for idx, data in enumerate(zip(s,reverse)):
            # Unpack data
            c,r = data
            # Check if not same
            if c != r:
                # We might need to add a letter at position idx
                print(idx, c, r)

Solution().shortestPalindrome("abcd")
                
        
# @lc code=end
