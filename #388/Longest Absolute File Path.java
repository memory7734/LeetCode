class Solution {
    public int lengthLongestPath(String input) {
        Stack<String> stk = new Stack();
        int l = 0;
        int output = 0;
        String[] dirs = input.split("\n");
        for (int i = 0; i < dirs.length; ++i) {
            int nbrOfTabs = 0;
            while (nbrOfTabs+1 < dirs[i].length() && dirs[i].substring(nbrOfTabs, nbrOfTabs+1).equals("\t")) {
                nbrOfTabs += 1;
            }
            while (nbrOfTabs < stk.size()) {
                String last = stk.pop();
                l -= last.length();
            }
            String curr = dirs[i].substring(nbrOfTabs);
            if (curr.indexOf('.') >= 0) {
                output = Math.max(output, l + curr.length() + stk.size());
            }
            l += curr.length();
            stk.push(curr);
        }
        return output;
    }
}