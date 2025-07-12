class Solution {
public:
    bool isLeap(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int dayOfYear(string date) {
        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30,
                                   31, 31, 30, 31, 30, 31};

        int day = stoi(date.substr(8));
        int month = stoi(date.substr(5, 2));
        int year = stoi(date.substr(0, 4));

        if (isLeap(year)) daysInMonth[1] = 29;

        int total = 0;
        for (int i = 0; i < month - 1; i++)
            total += daysInMonth[i];

        return total + day;
    }
};
