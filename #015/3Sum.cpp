class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> list;
        for (int i = 0; i < nums.size(); i++) {
            int target = -nums[i];
            int front = i + 1;
            int back = nums.size() - 1;
            while (front < back) {
                int sum = nums[front] + nums[back];
                if (sum < target) front++;
                else if (sum > target) back--;
                else {
                    vector<int> tmp(3, 0);
                    tmp[0] = nums[i];
                    tmp[1] = nums[front];
                    tmp[2] = nums[back];
                    list.push_back(tmp);
                    while (front < back && nums[front] == tmp[1]) front++;
                    while (front < back && nums[back] == tmp[2]) back--;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])i++;
        }
        return list;
    }
};