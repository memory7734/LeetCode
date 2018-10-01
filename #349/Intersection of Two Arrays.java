class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int n1 = nums1.length;
        int n2 = nums2.length;
        int pt1 = 0, pt2 = 0;
        List<Integer> ans = new ArrayList<Integer>();
        
        while(pt1 < n1 && pt2 < n2){
            if(nums1[pt1] == nums2[pt2]){
                ans.add(nums1[pt1]);
                pt1++;
                pt2++;
                while(pt1 < n1 && nums1[pt1] == nums1[pt1 - 1]) pt1++;
                while(pt2 < n2 && nums2[pt2] == nums2[pt2 - 1]) pt2++;
            }
            else if(nums1[pt1] > nums2[pt2]) pt2++;
            else pt1++;            
        }
        
        int[] res = new int[ans.size()];
        
        for(int k = 0; k < ans.size(); k++){
            res[k] = ans.get(k);
        }
        return res;
    }
}