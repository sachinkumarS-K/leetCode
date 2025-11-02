class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> arr;
        for (int i : asteroids) {
            bool flag = false;
            while(!arr.empty() && arr.back() > 0 && i < 0) {
                if (abs(arr.back()) < abs(i)) {
                    arr.pop_back();
                    continue;
                } else if (abs(arr.back()) == abs(i)) {
                    arr.pop_back();
                }
                flag = true;
                break;
            }
            if (!flag)
                arr.push_back(i);
        }
        return arr;
    }
};