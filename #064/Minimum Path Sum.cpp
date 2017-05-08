class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		if (grid.size() == 0) return 0;
		int m = grid.size();
		int n = grid[0].size();
		vector<vector<int>> map(m, vector<int>(n, grid[0][0]));
		for (int i = 1; i < m; i++) map[i][0] = map[i - 1][0] + grid[i][0];
		for (int i = 1; i < n; i++) map[0][i] = map[0][i - 1] + grid[0][i];
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				map[i][j] = min(map[i - 1][j], map[i][j - 1]) + grid[i][j];
			}
		}
		return map[m - 1][n - 1];
	}
};