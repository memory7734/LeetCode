class Solution {
private:
	void backtrack(vector<vector<int>> &res, vector<int> &tmp, vector<int> &nums, int start) {
	    vector<int> t(tmp);
		res.push_back(t);
		for (int i = start; i < nums.size(); i++) {
			tmp.push_back(nums[i]);
			backtrack(res, tmp, nums, i + 1);
			tmp.pop_back();
		}
	}

public:
	vector<vector<int>> subsets(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> res;
		vector<int> tmp;
		backtrack(res, tmp, nums, 0);
		return res;
	}
};