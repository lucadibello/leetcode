#
# @lc app=leetcode id=26 lang=python3
#
# [26] Remove Duplicates from Sorted Array
#

# @lc code=start
class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        # Check if not empty
        if (len(nums) < 0):
            return 0

        # Start scanning the array
        current = nums[0]
        i = 1
        while (i < len(nums)):
            # Check if next is same as current
            if (nums[i] == current):
                # Remove at index i
                del nums[i]
                # Decrease index i
                i -= 1;
            else:
                # Update current value
                current = nums[i]
            
            # Increase index
            i += 1
        return len(nums)
# @lc code=end