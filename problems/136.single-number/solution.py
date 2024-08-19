from typing import List


class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        # For simple arrays, avoid useless computation
        if len(nums) == 0: return 0
        elif len(nums) == 1: return nums[0] 
        # Otherwise, start actual computation by sorting the array, and cycling
        # through each couple of numbers: return the first couple with a different number
        nums = sorted(nums)
        i = 0
        while i < len(nums)-2:
            # get numbers in couples
            a, b = nums[i], nums[i+1]
            # if the two couples are different, return the first element
            if a != b: return a
            # if the same, proceed to the next couple
            else: i+=2
        # return the last number available
        return nums[i]

print(Solution().singleNumber([1]))