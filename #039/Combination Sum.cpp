class Solution {
private:
	void backtrack(vector<vector<int>>& res, vector<int>& nums, vector<int>& temp, int target, int begin) {
		if (target < 0)return;
		else if (target == 0) res.push_back(temp);
		else {
			for (int i = begin; i < nums.size(); i++) {
				temp.push_back(nums[i]);
				backtrack(res, nums, temp, target - nums[i], i);
				temp.pop_back();
			}
		}
	}
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		sort(candidates.begin(),candidates.end());
		vector<vector<int>> res;
		vector<int> temp;
		backtrack(res, candidates, temp, target, 0);
		return res;
	}
};