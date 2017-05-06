class Solution {
private:
	bool valid(vector<string>map, int x, int y) {
		for (int i = 0; i < x; i++) {
			if (map[i][y] == 'Q') return false;
		}
		for (int i = 1; i <= y; i++) {
			if (x - i < 0) break;
			if (map[x - i][y - i] == 'Q') return false;
		}
		for (int i = 1; i < map.size() - y; i++) {
			if (x - i < 0) break;
			if (map[x - i][y + i] == 'Q') return false;
		}
		return true;
	}
	void backtrack(int& res, vector<string>& map, int n, int start) {
		if (start >= n) {
			res++;
			return;
		}
		for (int i = 0; i < n; i++) {
			if (valid(map, start, i)) {
				map[start][i] = 'Q';
				backtrack(res, map, n, start + 1);
				map[start][i] = '.';
			}
		}
	}
public:
	int totalNQueens(int n) {
		int res = 0;
		vector<string> map(n, string(n, '.'));
		backtrack(res, map, n, 0);
		return res;
	}
};