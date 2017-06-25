class Solution {
public:
	bool isInterleave(string s1, string s2, string s3) {
		if (s1.length() + s2.length() != s3.length())return false;
		vector<bool> dp(s2.length() + 1);
		for (int i = 0; i <= dp.size(); i++) dp[i] = s2.substr(0, i) == s3.substr(0, i);

		for (int i = 1; i <= s1.length(); i++) {
			dp[0] = s1.substr(0, i) == s3.substr(0, i);
			for (int j = 1; j <= s2.length(); j++)
				dp[j] = (dp[j] && s3[i + j - 1] == s1[i - 1]) || (dp[j - 1] && s3[i + j - 1] == s2[j - 1]);

		}
		return dp[s2.length()];
	}
};