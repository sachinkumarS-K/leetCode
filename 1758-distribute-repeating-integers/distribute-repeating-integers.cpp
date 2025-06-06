class Solution {
public:
    bool solve(vector<int>& arr, vector<int>& quantity, int idx) {

        if (idx == quantity.size()) 
            return true;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= quantity[idx]) {
                arr[i] -= quantity[idx];

                if (solve(arr, quantity, idx + 1))
                    return true;
                else
                    arr[i] += quantity[idx];
            }
        }
        return false;
    }
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {

        unordered_map<int, int> freq;
        for (int i : nums)
            freq[i]++;

        vector<int> arr;
        for (auto i : freq)
            arr.push_back(i.second);
        sort(quantity.rbegin() , quantity.rend());
        return solve(arr, quantity, 0);
    }
};