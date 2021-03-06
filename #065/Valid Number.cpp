class Solution {
public:
	bool isNumber(string s) {
		s.erase(0, s.find_first_not_of(" "));
		s.erase(s.find_last_not_of(" ") + 1);
		bool pointSeen = false;
		bool eSeen = false;
		bool numberSeen = false;
		bool numberAfterE = true;
		for (int i = 0; i < s.length(); i++) {
			if ('0' <= s[i] && s[i] <= '9') {
				numberSeen = true;
				numberAfterE = true;
			}
			else if (s[i] == '.') {
				if (eSeen || pointSeen) {
					return false;
				}
				pointSeen = true;
			}
			else if (s[i] == 'e') {
				if (eSeen || !numberSeen) {
					return false;
				}
				numberAfterE = false;
				eSeen = true;
			}
			else if(s[i] == '-' || s[i] == '+') {
				if (i != 0 && s[i - 1] != 'e')
					return false;
			}
			else {
				return false;
			}
		}
		return numberSeen&&numberAfterE;
	}
};