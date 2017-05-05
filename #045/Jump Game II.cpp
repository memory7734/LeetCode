class Solution {
public:
	int jump(vector<int>& nums) {
		int len = nums.size();
		if (len <= 1) return 0;
		int step = 0, currentMax = 0, i = 0, nextMax = 0;
		while (currentMax - i + 1 > 0) {
			step++;
			for (; i <= currentMax; i++) {
				nextMax = max(nextMax, nums[i] + i);
				if (nextMax >= len - 1) return step;
			}
			currentMax = nextMax;
		}
		return 0;
	}
};