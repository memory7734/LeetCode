/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
	vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
		intervals.push_back(newInterval);
		vector<Interval> res;
		sort(intervals.begin(), intervals.end(), [](Interval a, Interval b) {return a.start < b.start; });
		res.push_back(intervals[0]);
		for (int i = 1; i < intervals.size(); i++) {
			if (res.back().end < intervals[i].start) res.push_back(intervals[i]);
			else res.back().end = max(res.back().end, intervals[i].end);
		}
		return res;
	}
};