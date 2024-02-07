#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start
class Solution:

    def twoSum(self, nums: list[int], target: int) -> list[int]:
        """
        Trivial solution:
            - Time complexity = O(n^2)
            - Space complexity = O(1)
        """
        for i in range(len(nums)):
            for j in range(len(nums)):
                # Skip if same number
                if (i == j): continue;

                # Check whether they sum up to target
                if (nums[i] + nums[j] == target):
                    return [i, j]
        else:
            return []
        
# @lc code=end

