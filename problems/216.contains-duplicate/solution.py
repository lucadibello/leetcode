from typing import List


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        lookup = set()
        for num in nums:
            if num not in lookup:
                lookup.add(num)
            else:
                return True
        return False
