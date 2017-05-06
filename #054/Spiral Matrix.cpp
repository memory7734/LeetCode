class Solution {
private:
	void backtrack(vector<vector<int>>& matrix, vector<int> &res, int x1, int y1, int x2, int y2) {
		if (x1 > x2 || y1 > y2) return;
		for (int i = y1; i <= y2; i++) {
			res.push_back(matrix[x1][i]);
		}
		for (int i = x1 + 1; i <= x2; i++) {
			res.push_back(matrix[i][y2]);
		}
		if (x1 < x2) {
			for (int i = y2 - 1; i > y1; i--) {
				res.push_back(matrix[x2][i]);
			}
		}
		if (y1 < y2) {
			for (int i = x2; i > x1; i--) {
				res.push_back(matrix[i][y1]);
			}
		}
		backtrack(matrix, res, x1 + 1, y1 + 1, x2 - 1, y2 - 1);
	}
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int>res;
		if (matrix.size() == 0) return res;
		backtrack(matrix, res, 0, 0, matrix.size() - 1, matrix[0].size() - 1);
		return res;
	}
};