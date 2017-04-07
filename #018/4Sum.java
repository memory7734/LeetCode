public class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        List<List<Integer>> lists = new LinkedList<>();
        for (int i = 0; i < nums.length - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < nums.length - 2; j++) {
                if (j - i > 1 && nums[j] == nums[j - 1]) continue;
                for (int k = j + 1; k < nums.length - 1; k++) {
                    if (k - j > 1 && nums[k] == nums[k - 1]) continue;
                    for (int l = k + 1; l < nums.length; l++) {
                        if (nums[i] + nums[j] + nums[k] + nums[l] > target) break;
                        if (nums[i] + nums[j] + nums[k] + nums[l] == target) {
                            List<Integer> integers = Arrays.asList(nums[i], nums[j], nums[k], nums[l]);
                            if (!lists.contains(integers)) {
                                lists.add(integers);
                            }
                            break;
                        }
                    }
                }
            }
        }
        return lists;
    }
}