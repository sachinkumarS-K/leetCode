class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for (int i : apple)
            sum += i;

        sort(capacity.begin(), capacity.end());

        int minBoxes = 0;
        for (int i = capacity.size() - 1; i >= 0; i--) {
            sum -= capacity[i];
            minBoxes++;
            if (sum <= 0)
                break;
        }
        return minBoxes;
    }
};