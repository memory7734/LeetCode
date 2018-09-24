
class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if(len(prices)==0):
            return 0
        minimum = [prices[0]]
        for i in range(1, len(prices)):
            minimum.append(min(prices[i], minimum[i - 1]))
        return max([prices[i] - minimum[i] for i in range(len(prices))])