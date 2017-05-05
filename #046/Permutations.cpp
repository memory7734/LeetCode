class Solution {
private:
	void backtrack(vector<vector<int>> &res, vector<int>& nums, vector<int>& temp, vector<bool>& flag, int start) {
		if (start == nums.size()) {
			res.push_back(temp);
			return;
		}
		for (int i = 0; i < nums.size(); i++) {
			if (!flag[i])continue;
			flag[i] = false;
			temp.push_back(nums[i]);
			backtrack(res, nums, temp, flag, start + 1);
			temp.pop_back();
			flag[i] = true;
		}
	}
public:
	vector<vector<int>> permute(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> res;
		vector<int> temp;
		vector<bool> flag(nums.size(), true);
		backtrack(res, nums, temp, flag, 0);
		return res;
	}
};