import string

class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        translator = str.maketrans("", "", string.punctuation)
            
        s = s.translate(translator)
        s = s.replace(" ", "")
        s = s.lower()
        
        return s == s[::-1]