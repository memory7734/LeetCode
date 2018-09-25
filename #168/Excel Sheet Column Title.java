public class Solution {
    public String convertToTitle(int n) {
        StringBuilder builder = new StringBuilder();
        while (n > 0) {
            if (n % 26 == 0) {
                builder.append("Z");
                n -= 26;
            } else {
                builder.append((char) (64 + n % 26));
            }
            n /= 26;
        }
        return builder.reverse().toString();
    }
}