class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        temp = ""
        for i, x in enumerate(s):
            if str(x).isalnum():
                temp += x
        temp = temp.lower()
        return temp[::-1] == temp