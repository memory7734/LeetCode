class Solution {
public:
	string getPermutation(int n, int k) {
		long f = 1;
		string s(n, '0');
		for (int i = 1; i <= n; i++) {
			f *= i;
			s[i - 1] += i;
		}
		k--;
		for (int i = 0, j; i < n; i++) {
			f /= n - i;
			j = i + k / f;
			char c = s[j];
			for (; j > i; j--) {
				s[j] = s[j - 1];
			}
			s[i] = c;
			k %= f;
		}
		return s;
	}
};