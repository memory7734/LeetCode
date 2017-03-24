class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int nums_length = nums1.size() + nums2.size();
	    if (nums_length==0)return 0;
		if (nums1.size() == 0) {
			nums1.push_back(nums2.back());
			nums2.pop_back();
		}
		if (nums2.size() == 0) {
			nums2.push_back(nums1.back());
			nums1.pop_back();
		}
		vector<int> nums;
		int i = 0, j = 0;
		nums1.push_back(INT_MAX);
		nums2.push_back(INT_MAX);
		while ((i + j) <= (nums_length >> 1)) {
			if (nums1[i] > nums2[j]) {
				nums.insert(nums.end(),nums2[j]);
				j++;
			}else{
				nums.insert(nums.end(), nums1[i]);
				i++;
			}
		}
		if ((nums_length & 1) == 0) {
			int last = nums.back();
			nums.pop_back();
			last += nums.back();
			return 1.0*last / 2;
		}
		return nums.back();
	}
};