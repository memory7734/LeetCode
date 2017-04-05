public class Solution {
    public int reverse(int x) {
        if(x==0) return 0;
        int value = x >= 0 ? x : -x;
        StringBuilder builder = new StringBuilder();
        while (value > 0) {
            builder.append(value % 10);
            value /= 10;
        }
        try {
            value = Integer.valueOf(builder.toString());
        } catch (Exception e) {
            return 0;
        }
        return x > 0 ? value : -value;
    }
}