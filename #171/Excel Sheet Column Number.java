public class Solution {
    public int trailingZeroes(int n) {
        int temp = n / 5, result = temp;
        while (temp >= 5) {
            result += temp / 5;
            temp /= 5;
        }
        return result;
    }
}