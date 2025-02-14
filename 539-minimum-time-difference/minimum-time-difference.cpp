class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minTime(timePoints.size()) ;

        for(int i = 0 ; i<timePoints.size() ; i++){
            int h = stoi(timePoints[i].substr(0,2));
            int m = stoi(timePoints[i].substr(3,2));
            minTime[i] = h*60+m ;
        }
        sort(minTime.begin() ,minTime.end());
        int minDiff = INT_MAX;

        for(int i = 0 ; i<minTime.size()-1 ; i++){
            minDiff = min(minDiff , (minTime[i+1] - minTime[i]) );
        }
        int l = (minTime[0]+1440) - minTime[minTime.size()-1];
        minDiff = min(l, minDiff);

        return minDiff ;
    }
};