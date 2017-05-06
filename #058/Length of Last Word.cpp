class Solution {
public:
	int lengthOfLastWord(string s) {
		int pos = s.find_last_not_of(' ');
		int sum = 0;
		for (int i = pos; i >= 0; i--) {
			if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z')) sum++;
			else return sum;
		}
		return sum;
	}
};