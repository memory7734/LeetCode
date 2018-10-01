public class Solution {
    public int getSum(int a, int b) {
        int s;
        while(b!=0){
            s=a^b;
            b=(a&b)<<1;
            a=s;
        }
        return a;
    }
}