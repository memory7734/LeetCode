class Solution {
public:
	int uniquePaths(int m, int n) {
		vector<vector<int>> map(m, vector<int>(n, 1));
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				map[i][j] = map[i][j - 1] + map[i - 1][j];
			}
		}
		return map[m - 1][n - 1];
	}
};