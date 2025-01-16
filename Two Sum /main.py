class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        list = []
        for x in nums:
            if x >= target:
                nums.remove(x)
        for y in range(len(nums)-1):
            for z in range(len(nums)-1):
                if nums[z] == nums[y]:
                    continue
                elif nums[y] + nums[z] == target:
                   return [y,z]
test_case = Solution()
test_case([1,2,3,4,],3)