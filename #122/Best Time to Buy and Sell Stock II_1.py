class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) == 0:
            return 0
        profit, temp = 0, 0
        low, high = prices[0], prices[0]
        for x in prices:
            if x < high:
                profit += temp
                low, high = x, x
            high = max(high, x)
            temp = high - low
        return profit + temp