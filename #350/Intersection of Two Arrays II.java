class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int[] result = new int[nums1.length+nums2.length];
        int cnt = 0;
        int i, j, k=0;
        for(i=0,j=0; i < nums1.length && j < nums2.length; ) {
            if(nums1[i] < nums2[j]) {
               
                ++i;
            } else if(nums1[i] == nums2[j]) {
                ++cnt;
                result[k++] = nums1[i];
                ++i; ++j;
            } else {
               
                ++j;
            }
        }
        int[] final_ans = new int[cnt];
        for( i = 0; i < cnt; ++i)
            final_ans[i] = result[i];
        return final_ans;
    }
}