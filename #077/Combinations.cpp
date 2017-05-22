class Solution {
private:
	void backtrack(vector<vector<int>> &res, vector<int> &tmp, int n, int k, int start, int now) {
		if (start == k) {
			res.push_back(tmp);
			return;
		}
		for (int i = now + 1; i <= n; i++) {
			tmp.push_back(i);
			backtrack(res, tmp, n, k, start + 1, i);
			tmp.pop_back();
		}
	}
public:
	vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> res;
		vector<int> tmp;
		backtrack(res, tmp, n, k, 0, 0);
		return res;
	}
};