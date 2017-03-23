class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        map<int,int> m;
        for (int i = 0; i < nums.size(); ++i) {
            int number_to_find = target - nums[i];
            if (m.find(number_to_find) != m.end()) {
                v.push_back(m[number_to_find]);
                v.push_back(i);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};