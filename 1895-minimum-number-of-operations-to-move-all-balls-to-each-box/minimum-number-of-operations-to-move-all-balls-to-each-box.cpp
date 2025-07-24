class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size(), 0);

        for (int i = 0; i < boxes.size(); i++) {
            if (boxes[i] == '1') {
                for (int j = 0; j < boxes.size(); j++) {
                    ans[j] += abs(i - j);
                }
            }
        }
        return ans;
    }
};