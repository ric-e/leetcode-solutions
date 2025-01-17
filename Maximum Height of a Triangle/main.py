class Solution(object):
    def maxHeightOfTriangle(self, red, blue):
        """
        :type red: int
        :type blue: int
        :rtype: int
        """
        counter = 0
        red_add = 1
        blue_add = 1
        red_c = 1
        blue_c = 0
        total_size = 0
        maximum = False
        while maximum != True:
            if counter % 2 != 0:
                red_c += red_add
                if red >= red_c:
                    total_size += 1
                    red_add += 1
                else:
                    maxiumum = True
                    continue
            else:
                
                blue_c += blue_add
                if blue >= blue_c:
                    total_size += 1
                    blue_add += 1
                else:
                    maxiumum = True
                    continue


        return total_size