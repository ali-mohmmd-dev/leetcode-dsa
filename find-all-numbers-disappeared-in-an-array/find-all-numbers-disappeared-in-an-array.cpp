        number = set(nums)

        for i in range(1, len(nums) + 1):
            if i not in number:
                seen.append(i)
        seen = []
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
class Solution:
