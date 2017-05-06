class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> res;
		sort(strs.begin(), strs.end());
		map<string, vector<string>> group;
		for (int i = 0; i < strs.size(); i++) {
			string temp = strs[i];
			sort(temp.begin(), temp.end());
			group[temp].push_back(strs[i]);
		}
		for (map<string, vector<string>>::iterator i = group.begin(); i != group.end(); i++) {
			res.push_back(i->second);
		}
		return res;
	}
};