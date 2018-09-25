public class Solution {
    public int singleNumber(int[] nums) {
        HashSet<Integer> hashSet = new HashSet<>();
        for (int num : nums)
            if (hashSet.add(num) == false)
                hashSet.remove(num);
        Iterator<Integer> iterator = hashSet.iterator();
        return iterator.next();
    }
}