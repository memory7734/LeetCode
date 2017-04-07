class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans;
        }
        string map[] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        ans.push_back("");
        for (int i = 0; i < digits.length(); ++i) {
            int x = digits[i] - '0';
            while (ans[0].length() == i) {
                string t = ans[0];
                ans.erase(ans.begin(), ans.begin() + 1);
                for (int j = 0; j < map[x].length(); j++) {
                    ans.push_back(t + map[x][j]);
                }
            }
        }
        return ans;
    }
};