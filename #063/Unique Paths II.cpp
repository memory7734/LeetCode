class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();
		vector<vector<int>> map(m, vector<int>(n, 1));
		for (int i = 0; i < m; i++) {
			if (obstacleGrid[i][0] == 1 || (i > 0 && map[i - 1][0] == 0)) map[i][0] = 0;
		}
		for (int i = 0; i < n; i++) {
			if (obstacleGrid[0][i] == 1 || (i > 0 && map[0][i - 1] == 0)) map[0][i] = 0;
		}
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				map[i][j] = map[i - 1][j] + map[i][j - 1];
				if (obstacleGrid[i][j] == 1) map[i][j] = 0;
			}
		}
		return map[m - 1][n - 1];
	}
};