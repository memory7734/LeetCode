class Solution {
   public
    int[] twoSum(int[] numbers, int target) {
        // null check
        if (numbers == null || numbers.length == 0 || target == 0) {
            return null;
        }
        // define two pointers
        int left = 0;
        int right = numbers.length - 1;

        while (left < right) {
            int x = numbers[left] + numbers[right];
            if (x == target)
                return new int[]{left + 1, right + 1};
            else if (x < target)
                left++;
            else
                right--;
        }
        return null;
    }
}