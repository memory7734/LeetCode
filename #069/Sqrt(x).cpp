class Solution {
public:
	int mySqrt(int x) {
		int a = x, b = x;
		while (a*a != x) {
			b = (a + x / b) / 2;
			b = b & 0x7FFFFFFF;
			if (b >= a) return a;
			a = b;
		}
		return a;
	}
};