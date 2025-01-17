# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        a = ""
        b = ""

        for x in range(len(l1),0,-1):
            print(x)
            a += str(x)
        a = int(a)
        print(a)    
        for y in range(len(l2),0,-1):
            b += str(y)
        
        b = int(b)

        c = a + b
        z = [i for i in str(c)]
        return z

test = Solution()

result = test.addTwoNumbers([1,2,3,4,5],[1,2,3,4,5])
print(result)