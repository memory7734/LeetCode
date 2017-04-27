public class Solution {
    public String countAndSay(int n) {
        String result = "1";
        while (n > 1) {
            if (result.length() == 1) {
                result = 1 + result;
            } else {
                int count = 1;
                String current = "";
                for (int i = 0; i < result.length() - 1; i++) {
                    if (result.substring(i, i + 1).equals(result.substring(i + 1, i + 2))) {
                        count++;
                    } else {
                        current = current + count + result.substring(i, i + 1);
                        count = 1;
                    }
                }
                current = current + count + result.substring(result.length() - 1);
                result = current;
            }
            n--;
        }
        return result;
    }
}