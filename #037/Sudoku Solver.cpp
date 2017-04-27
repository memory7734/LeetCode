class Solution {
public:
	bool isValidSudoku(vector<vector<char> > &board, int row, int col, char c) {
		for (int i = 0; i < 9; i++) {
			if (board[i][col] != '.' && board[i][col] == c) return false;
			if (board[row][i] != '.' && board[row][i] == c) return false;
			int x = 3 * (row / 3) + i / 3;
			int y = 3 * (col / 3) + i % 3;
			if (board[x][y] != '.' &&board[x][y] == c) return false;
		}
		return true;
	}
	bool solve(vector<vector<char>>& board) {
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[0].size(); j++) {
				if (board[i][j] == '.') {
					for (char c = '1'; c <= '9'; c++) {
						if (isValidSudoku(board, i, j, c)) {
							board[i][j] = c;
							if (solve(board))
								return true;
							else
								board[i][j] = '.';
						}
					}
				    return false;
				}
			}
		}
		return true;
	}
	void solveSudoku(vector<vector<char>>& board) {
		if (board.size() <= 0) return;
		solve(board);
	}
};