class Solution {
public:
	bool canJump(vector<int>& nums) {
		vector<bool> flag(nums.size(), false);
		flag[0] = true;
		for (int i = 0; i < nums.size(); i++) {
			if (!flag[i]) return false;
			if (i + nums[i] == nums.size() - 1) return true;
			if (flag[i + nums[i]]) continue;
			for (int j = 1; j <= nums[i]; j++) {
				if (i + j == nums.size() - 1) return true;
				flag[i + j] = true;
			}
		}
		return flag[flag.size() - 1];
	}
};