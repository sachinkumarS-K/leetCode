class Solution {
public:
    long long zeroFilledSubarray(vector<int>& arr) {
        long long ans = 0, c = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                c++;
                ans += c;  
            } else {
                c = 0;
            }
        }
        return ans;
    }
};