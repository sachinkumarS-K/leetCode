class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>time ;
        for(auto s : timePoints){
            int h = stoi(s.substr(0,2));
            int m = stoi(s.substr(3,2));
            time.push_back(h*60+m);
        }
        int minDiff = INT_MAX;
        sort(time.begin() , time.end());

        for(int i = 1 ; i<time.size() ; i++)
            minDiff = min(minDiff , time[i]-time[i-1]);
        
        int rem = 1440 - time[time.size()-1];
        
        return min(minDiff , rem + time[0]) ;
    }
};