class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.length() == 0) return 0;
		map<char, int> mp;
		int num = 0;
		for (int i = 0, j = 0; i < s.length(); i++) {
			map<char, int>::iterator it = mp.find(s[i]);
			if (it != mp.end()) {
				j = max(j, mp[s[i]] + 1);
			}
			mp[s[i]] = i;
			num = max(num, i - j + 1);
		}
		return num;
	}
};