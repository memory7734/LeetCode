class Solution {
    public int titleToNumber(String s) {
        int result = 0;
        for(char c: s.toCharArray()) {
            int num = c - 64;
            result = result * 26 + num;
        }
        return result;
    }
}