class Solution(object):
    def convertToTitle(self, columnNumber):
        string = ''
        while columnNumber > 0:
            columnNumber -= 1
            n = columnNumber % 26
            string = chr(65 + n) + string
            columnNumber //= 26
        return string 
        