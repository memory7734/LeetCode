public class Solution {
    public int mySqrt(int num) {
        int x = num, y = num;
        while (x * x != num) {
            y = (x + num / x) / 2;
            y = y & 0x7FFFFFFF;
            if (y >= x) return x;
            x = y;
        }
        return x;
    }
}