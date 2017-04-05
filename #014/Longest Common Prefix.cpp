class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string returnString;
        if (strs.size() <= 0) {
            return returnString;
        }
        string s = strs[0];
        for (int i = 0; i < strs.size(); i++) {
            while (strs[i].find(s) != 0) {
                s = s.substr(0, s.length() - 1);
            }
        }
        return s;
    }
};