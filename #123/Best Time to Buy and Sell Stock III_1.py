class Solution(object):
    def maxProfit(self, prices):
        """
        :type k: int
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) < 2:
            return 0
        k = 2
        dp = [0 for i in range(len(prices))]
        for i in range(1, k + 1):
            temp_max = dp[0] - prices[0]
            for j in range(1, len(prices)):
                temp = temp_max
                temp_max = max(temp_max, dp[j] - prices[j])
                dp[j] = max(dp[j - 1], prices[j] + temp)
        return dp[len(prices) - 1]