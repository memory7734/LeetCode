class Solution {
private:
	void backtrack(vector<vector<int>>& matrix, int x1, int y1, int x2, int y2, int num) {
		if (x1 > x2 || y1 > y2) return;
		for (int i = y1; i <= y2; i++) {
			matrix[x1][i] = num++;
		}
		for (int i = x1 + 1; i <= x2; i++) {
			matrix[i][y2] = num++;
		}
		if (x1 < x2) {
			for (int i = y2 - 1; i > y1; i--) {
				matrix[x2][i] = num++;
			}
		}
		if (y1 < y2) {
			for (int i = x2; i > x1; i--) {
				matrix[i][y1] = num++;
			}
		}
		backtrack(matrix, x1 + 1, y1 + 1, x2 - 1, y2 - 1, num);
	}
public:
	vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> matrix(n, vector<int>(n, 0));
		backtrack(matrix, 0, 0, n - 1, n - 1, 1);
		return matrix;
	}
};