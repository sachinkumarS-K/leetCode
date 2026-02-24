class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count = 0;

        sort(intervals.begin(), intervals.end(),
             [](auto& a, auto& b) { return a[1] < b[1]; });

        int prev = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++)
            if (intervals[i][0] < prev)
                count++;
            else
                prev = intervals[i][1];

        return count;
    }
};