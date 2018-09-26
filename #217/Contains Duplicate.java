class Solution {
    public boolean containsDuplicate(int[] nums) {        
        if(nums==null || nums.length<2) return false;
        for(int i=1; i<nums.length; i++)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(nums[i]>nums[j]) break;
                if(nums[i]==nums[j]) return true;
            }
        }
        return false;
    
    }
}