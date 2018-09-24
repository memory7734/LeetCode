public class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> lists = new ArrayList<>();
        for (int i = 0; i < numRows; i++) {
            List<Integer> row = new ArrayList<>();
            if (lists.size() == 0) {
                row.add(1);
            } else if (lists.size() == 1) {
                row.add(1);
                row.add(1);
            } else {
                row.add(1);
                List<Integer> lastRow = lists.get(lists.size() - 1);
                for (int j = 0; j < lastRow.size() - 1; j++) {
                    row.add(lastRow.get(j) + lastRow.get(j + 1));
                }
                row.add(1);
            } 

            lists.add(row);
        }
        return lists;
    }
}