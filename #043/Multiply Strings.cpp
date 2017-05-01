class Solution {
public:
	string multiply(string num1, string num2) {
		int m = num1.size(), n = num2.size();
		string sum(m + n, '0');
		for (int i = m - 1; i >= 0; i--) {
			int carry = 0;
			for (int j = n - 1; j >= 0; j--) {
				int tmp = (sum[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
				sum[i + j + 1] = tmp % 10 + '0';
				carry = tmp / 10;
			}
			sum[i] += carry;
		}
		size_t start = sum.find_first_not_of("0");
		if (start != string::npos)
			return sum.substr(start);
		return "0";
	}
};