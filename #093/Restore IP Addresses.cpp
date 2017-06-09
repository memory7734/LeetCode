class Solution {
private:
	void backtrack(vector<string> &res, string ip, string s,int start,int step) {
		if (start == s.size() && step == 4) {
			ip.erase(ip.end() - 1);
			res.push_back(ip);
			return;
		}
		if (s.size() - start > (4 - step) * 3)return;
		if (s.size() - start < (4 - step))return;
		int num = 0;
		for (int i = start; i < start + 3; i++) {
			num = num * 10 + (s[i] - '0');
			if (num <= 255) {
				ip += s[i];
				backtrack(res, ip + '.', s, i + 1, step + 1);
			}
			if (num == 0)break;
		}

	}
public:
	vector<string> restoreIpAddresses(string s) {
		vector<string> res;
		string ip;
		backtrack(res, ip, s, 0, 0);
		return res;
	}
};