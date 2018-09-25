class Solution {
    public int majorityElement(int[] nums) {
        int len = nums.length;
        if (len == 1) {
            return nums[0];
        }
        int king = 0;
        int kingCount = 1;
        for (int i = 1; i < len; i++) {
            if (nums[i] == nums[king]) {
                kingCount++;
            }
            else {
                kingCount--;
                if (kingCount == 0) {
                    king = i;
                    kingCount = 1;
                }
            }
        }
        return nums[king];
    }
}