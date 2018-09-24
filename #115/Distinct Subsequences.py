from collections import defaultdict

class Solution:
    def numDistinct(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: int
        """
        if not s or not t:
            return 0
        
        li = [0 for x in range(len(t))]
        d = defaultdict(list)
        
        for (i, ch) in enumerate(t):
            d[ch].append(i)
        
        for i in range(len(s)):
            if s[i] in t:
                for j in reversed(d[s[i]]):
                    if j == 0:
                        li[0] += 1
                    else:
                        li[j] += li[j - 1]
        return li[-1]