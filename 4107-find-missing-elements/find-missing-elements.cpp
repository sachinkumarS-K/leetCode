class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        vector<int> ans;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size() - 1; i++) {
            int curr = arr[i];
            int next = arr[i + 1];
            while (curr + 1 < next)
                ans.push_back(++curr);
        }

        return ans;
    }
};
