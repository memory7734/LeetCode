public class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> lists = new LinkedList<>();
        for (int i = 0; i < nums.length-2; i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < nums.length-1; j++) {
                if (nums[i] + nums[j] > 0) break;
                if (j - i > 1 && nums[j] == nums[j - 1]) continue;
                for (int k = j + 1; k < nums.length; k++) {
                    if (nums[i] + nums[j] + nums[k] > 0) break;
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        List<Integer> integers = Arrays.asList(nums[i], nums[j], nums[k]);
                        if (!lists.contains(integers)) {
                            lists.add(integers);
                        }
                        break;
                    }
                }
            }
        }
        return lists;
    }
}