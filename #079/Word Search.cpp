class Solution {
public:
	bool exist(vector<vector<char> > &board, string word) {
		if (board.size() <= 0 || board[0].size() <= 0) return word.length() == 0;
		for (int x = 0; x < board.size(); x++)
			for (int y = 0; y < board[0].size(); y++)
				if (isFound(board, word, x, y, 0))
					return true;
		return false;
	}
private:
	bool isFound(vector<vector<char> > &board, string word, int x, int y, int i) {
		if (i == word.length())return true;
		if (x < 0 || y < 0 || x == board.size() || y == board[0].size()
			 || word[i] != board[x][y])
			return false;
		char t = board[x][y];
		board[x][y] = '\0';
		if (isFound(board, word, x - 1, y, i + 1) || isFound(board, word, x + 1, y, i + 1)
			|| isFound(board, word, x, y - 1, i + 1) || isFound(board, word, x, y + 1, i + 1))
			return true;
		board[x][y] = t;
		return false;
	}
};