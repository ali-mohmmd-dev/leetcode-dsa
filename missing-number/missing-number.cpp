    def missingNumber(self, nums: list[int]) -> int:
        n = len(nums)

        missingline = n * (n + 1) // 2
        actualline =  sum(nums)

        return missingline - actualline

