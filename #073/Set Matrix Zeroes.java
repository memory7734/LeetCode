public class Solution {
    public void setZeroes(int[][] matrix) {
        int rowNum = matrix.length;
        int columnNum = matrix[0].length;
        boolean[] row = new boolean[rowNum];
        boolean[] column = new boolean[columnNum];
        for (int i = 0; i < rowNum; i++) {
            for (int j = 0; j < columnNum; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = true;
                    column[j] = true;
                }
            }
        }
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (row[i] || column[j])
                    matrix[i][j] = 0;
            }
        }
    }
}