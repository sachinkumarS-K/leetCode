// we have to go through each second and see in which see was posioned, for
// //that we need to check each second and count the seconds of duration, we
// will +1 each second that she is to be poisoned to count
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0)
            return 0;
        int Totalpoisoned = 0;
        for (int i; i < n - 1; i++) {
            int diff = timeSeries[i + 1] - timeSeries[i];
            Totalpoisoned += min(diff, duration);
        }
        Totalpoisoned += duration;
        return Totalpoisoned;
    }
};