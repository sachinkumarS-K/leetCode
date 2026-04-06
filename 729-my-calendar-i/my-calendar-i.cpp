class MyCalendar {
public:
    vector<pair<int, int>> arr;
    MyCalendar() {}

    bool book(int startTime, int endTime) {
        if (arr.size() == 0) {
            arr.push_back({startTime, endTime});
            return true;
        }
        for (auto it : arr)
            if (startTime < it.second && endTime > it.first)
                return false;           
        
        arr.push_back({startTime , endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */