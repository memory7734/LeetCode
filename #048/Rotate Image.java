public class Solution {
    public void rotate(int[][] matrix) {
        for (int count = 0; count < matrix.length / 2; count++) {
            for (int i = count; i < matrix.length - 1 - count; i++) {
                int temp = matrix[count][i];
                matrix[count][i] = matrix[matrix.length - 1 - i][count];
                matrix[matrix.length - 1 - i][count] = matrix[matrix.length - 1 - count][matrix.length - 1 - i];
                matrix[matrix.length - 1 - count][matrix.length - 1 - i] = matrix[i][matrix.length - 1 - count];
                matrix[i][matrix.length - 1 - count] = temp;
            }
        }
    }
}