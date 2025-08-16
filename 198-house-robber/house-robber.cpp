class Solution {
public:
    int rob(vector<int>& arr) {
        int n = arr.size();
        int n1 = 0, n2 = 0;
        int curr = 0;
        for (int i = n - 1; i >= 0; i--) {
            int pick = arr[i] + n2 ;
            int notPick = n1 ;
            curr = max(pick , notPick);

            n2 = n1 ;
            n1 = curr;
        }
        return curr;
    }
};
