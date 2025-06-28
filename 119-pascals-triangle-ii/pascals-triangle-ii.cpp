class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        int n = rowIndex + 1;
        ans.push_back(1);
        long long temp = 1;
        for(int i = 1 ; i<= rowIndex ; i++){
            temp = temp*(n-- -1)/i;
            ans.push_back(temp);
        }
        return ans;
    }
};