class TimeMap {
public:
    unordered_map<string, vector<pair<string, int>>> mp;
    TimeMap() {}
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value, timestamp});
    }

    string get(string key, int timestamp) {
        if (mp.find(key) == mp.end())
            return "";

        vector<pair<string, int>>&arr = mp[key];
        int l = 0, h = arr.size() - 1;
        string ans = "";
        while (l <= h) {
            int m = (l + h) / 2;
            if (arr[m].second <= timestamp) {
                ans = arr[m].first;
                l = m + 1;
            } else {
                h = m - 1;
            }
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */