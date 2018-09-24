class Solution(object):
    def maxProfit(self, prices):
        """
        :type k: int
        :type prices: List[int]
        :rtype: int
        """
        hold1, hold2, release1, release2 = -2147483648, -2147483648, 0, 0
        for i in prices:
            release2 = max(release2, hold2 + i)
            hold2 = max(hold2, release1 - i)
            release1 = max(release1, hold1 + i)
            hold1 = max(hold1, -i)
        return release2