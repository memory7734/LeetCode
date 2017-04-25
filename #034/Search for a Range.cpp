class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		vector<int> res(2, -1);
		if (nums.size() <= 0) return res;
		int left = 0, right = nums.size() - 1;
		int mid;
		while (left < right)
		{
			mid = (right + left) / 2;
			if (nums[mid] < target) left = mid + 1;
			else right = mid;
		}
		if (nums[left] != target) return res;
		res[0] = left;
		right = nums.size() - 1;
		while (left < right)
		{
			mid = (right + left) / 2 + 1;
			if (nums[mid] > target) right = mid - 1;
			else left = mid;
		}
		res[1] = right;
		return res;
	}
};