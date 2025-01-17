class Solution(object):
    def findNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        r = 0 
        for i in nums:
            if len(str(i)) % 2 == 0:
                r += 1
                
        return r
                