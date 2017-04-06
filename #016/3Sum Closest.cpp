class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size(); i++) {
            int current = target - nums[i];
            int front = i + 1;
            int back = nums.size() - 1;
            while (front < back) {
                int sum = nums[front] + nums[back];
                if (abs(sum - current) < abs(target - res)) {
                    res = sum + nums[i];
                }
                if (sum < current) front++;
                else if (sum > current) back--;
                else {
                    int left = nums[front];
                    int right = nums[back];
                    while (front < back && nums[front] == left) front++;
                    while (front < back && nums[back] == right) back--;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])i++;
        }
        return res;
    }
};