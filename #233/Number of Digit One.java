public class Solution {
    public int countDigitOne(int n) {
        if (n < 0) {
            return 0;
        }
        String s = String.valueOf(n);
        int num10 = 1;
        int[] array = new int[s.length()];
        array[0] = 0;
        for (int i = 1; i < array.length; i++) {
            array[i] = array[i - 1] * 10 + num10;
            num10 *= 10;
        }
        int result = 0, temp = n, mi = 1;
        for (int i = 0; i < array.length; i++) {
            result = result + temp % 10 * array[i];
            if (temp % 10 == 1) {
                result += n % mi + 1;
            } else if (temp % 10 != 0) {
                result += mi;
            }
            temp /= 10;
            mi *= 10;
        }
        return result;
    }
}