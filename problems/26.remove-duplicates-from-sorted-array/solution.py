from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return []

        curr = nums[0]
        i = 0
        for val in nums[1::]:
            if val != curr:
                curr = val
                i += 1
            else:
                nums.pop(i)

        return i+1

    
print(Solution().removeDuplicates([0,0,1,1,1,2,2,3,3,4]))
