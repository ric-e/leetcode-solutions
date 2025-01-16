class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for x in nums:
            if x >= target:
                nums.remove(x)
        for i in range(len(nums)-1):
            j = 0
            while j != (len(nums)-1):
                if j == i:
                    j += 1
                    continue
                elif nums[i] + nums[j] == target:
                    l = [i,j]
                    return l
