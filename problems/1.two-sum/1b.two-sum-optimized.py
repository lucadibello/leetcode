#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        """
        Optimized solution:
            - Time complexity: O(n log(n))
            - Space complexity: O(n)
        """

        # Sort array based on indexes
        numsIndices = sorted(range(len(nums)), key=lambda k: nums[k])

        # Lambda to get actual number from an index of the sorted indices
        getNumber = lambda index: nums[numsIndices[index]]

        # Optimized solution using two pointers
        first = 0
        second = len(nums) - 1
        for _ in range(len(nums)):
            # Now, try to compute sum between two pointers
            tot = getNumber(first) + getNumber(second)

            # Check wether we exceed the sum
            if tot > target:
                # Decrease second
                second -= 1
            elif tot < target:
                first += 1
            elif tot == target:
                return [numsIndices[first], numsIndices[second]]

        # Otherwise, if no valid solution is found we return an empty list
        return []


# @lc code=end
