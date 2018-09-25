class Solution {
   public:
    int findPeakElement(vector<int>& nums) {
        for (int i = 1; i < nums.size() - 1; i++)
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                return i;
        if (nums[1] < nums[0])
            return 0;
        return nums.size() - 1;
    }
};