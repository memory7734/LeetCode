class Solution {
private:
	void backtrack(vector<vector<int>> &res,vector<int> &temp,vector<int> nums,int start){
		res.push_back(temp);
		for (int i = start; i < nums.size(); i++) {
			if (i > start&&nums[i] == nums[i - 1])continue;
			temp.push_back(nums[i]);
			backtrack(res, temp, nums, i + 1);
			temp.pop_back();
		}
	}
public:
	vector<vector<int> > subsetsWithDup(vector<int> &S) {
		vector<vector<int>> res;
		vector<int> temp;
		sort(S.begin(), S.end());
		backtrack(res, temp, S, 0);
		return res;
	}
};