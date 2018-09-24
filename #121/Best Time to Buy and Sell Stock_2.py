class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minimum,val = 2147483647,0
        for i in range(0, len(prices)):
            minimum = min(prices[i], minimum)
            val = max(val, prices[i] - minimum)
        return val
        