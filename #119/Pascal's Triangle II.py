class Solution:
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        if rowIndex==0:
            return [1]
        if rowIndex==1:
            return [1,1]
        res=[1,1]
        for x in range(rowIndex-1):
            res.append(1)
            for i in range(len(res)-2,0,-1):
                res[i]=res[i]+res[i-1]
        return res
            