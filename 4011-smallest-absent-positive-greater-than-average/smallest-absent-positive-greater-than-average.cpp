class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        long long sum = 0;
        for (int x : nums) sum += x;
        double avg = (double)sum / nums.size();

        unordered_set<int> st(nums.begin(), nums.end());

        int candidate = floor(avg) + 1;
        if (candidate < 1) candidate = 1; 

        while (st.count(candidate)) {
            candidate++;
        }
        return candidate;
    }
};
