class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		int len = heights.size();
		stack<int> s;
		int maxArea = 0;
		for (int i = 0; i <= len; i++) {
			int h = (i == len ? 0 : heights[i]);
			if (s.empty() || h >= heights[s.top()]) {
				s.push(i);
			}
			else {
				int tp = s.top();
				s.pop();
				maxArea = max(maxArea, heights[tp] * (s.empty() ? i : i - 1 - s.top()));
				i--;
			}
		}
		return maxArea;
	}
};