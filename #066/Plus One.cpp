class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		vector<int>res(digits.size(), 0);
		int c = 0;
		digits[digits.size() - 1]++;
		for (int i = digits.size() - 1; i >= 0; i--) {
			res[i] = digits[i] + c;
			if (res[i] > 9) {
				c = res[i] / 10;
				res[i] %= 10;
			}
			else {
				c = 0;
			}

		}
		if (c != 0)res.insert(res.begin(), c);
		return res;
	}
};