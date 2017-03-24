class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows < 2) return s;
        vector<string> v;
        while (v.size() < numRows) {
            string str;
            v.push_back(str);
        }
        bool backward = true;
        int i = 0;
        int currentString = 0;
        while (i < s.length()) {
            v[currentString] += (s[i++]);
            if (currentString == v.size() - 1) {
                backward = false;
            } else if (currentString == 0) {
                backward = true;
            }
            currentString = backward ? (currentString + 1) : (currentString - 1);
        }
        string res;
        for (int j = 0; j < v.size(); ++j) {
            res.append(v[j]);
        }
        return res;
    }
};