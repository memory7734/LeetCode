class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		for (int count = 0; count < matrix.size() / 2; count++) {
			for (int i = count; i < matrix.size() - 1 - count; i++) {
				int temp = matrix[count][i];
				matrix[count][i] = matrix[matrix.size() - 1 - i][count];
				matrix[matrix.size() - 1 - i][count] = matrix[matrix.size() - 1 - count][matrix.size() - 1 - i];
				matrix[matrix.size() - 1 - count][matrix.size() - 1 - i] = matrix[i][matrix.size() - 1 - count];
				matrix[i][matrix.size() - 1 - count] = temp;
			}
		}
	}
};