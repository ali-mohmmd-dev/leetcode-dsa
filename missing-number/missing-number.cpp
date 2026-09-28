class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        ordernmb = set(nums)

        for i in range( len(nums) + 2 ):
            if i not in ordernmb:
                return i

