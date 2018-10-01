public class Solution {
    public boolean isPerfectSquare(int num) {
        int x = num, y = num;
        while (x * x != num) {
            y = (x + num / x) / 2;
            if (y >= x) return false;
            x = y;
        }
        return true;
    }
}