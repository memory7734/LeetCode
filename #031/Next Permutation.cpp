class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		if (nums.size() < 2) return;
		int p = nums.size() - 1;
		while (p > 0)
		{
			if (nums[p - 1] < nums[p]) break;
			p--;
		}
		if (p == 0)
		{
			reverse(nums, 0, nums.size() - 1);
			return;
		}
		int min = nums[p - 1];
		int j = nums.size() - 1;
		while (j >= p) {
			if (nums[j] > min)
				break;
			j--;
		}
		swap(nums[j], nums[p - 1]);
		reverse(nums, p, nums.size() - 1);
	}
	void swap(int &a, int &b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	void reverse(vector<int>& nums, int start, int end)
	{
		if (start >= end) return;
		for (int i = start; i <= (start + end) / 2; i++)
		{
			swap(nums[i], nums[start + end - i]);
		}
	}
};